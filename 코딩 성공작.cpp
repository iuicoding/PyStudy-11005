#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
//Ű���尪 
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4
using namespace std;

int keyControl();
void init();
void titleDraw();
void menyDraw();
void gotoxy(int,int);
void game();
int menuDraw();
void infoDraw(); 

int main() {
	init();
	while(1){
		titleDraw();
		int menuCode = menuDraw();
		if(menuCode == 0){
			game();
			//���ӽ���  
		} else if(menuCode == 1){
			infoDraw();
			//��������  
		} else if(menuCode == 2){
			return 0;//���� 
		}
		system("cls");
	}
	titleDraw();
	int menuCode= menuDraw();
	printf("�Է��Ͻ� Ű���� %d �Դϴ�\n", menuCode);
	game();
	return 0;
}	

void infoDraw(){
	system("cls");
	printf("\n\n");
	printf("            [���۹�]\n\n");
	printf("            ����:w �Ʒ���:s \n");
	printf("            sapiens�� ���� ����ܾ�� ���Ǿ ���ɴϴ�.");
	printf("           ���� :�����̽���\n\n\n\n\n\n ");
	printf("           ������:11005 ������\n\n");
	printf("      �����̽��ٸ� ������ ����ȭ������ �̵��մϴ�.");
	
	while(1){
		if(keyControl() == SUBMIT){
			break;
		}
	}
}
int keyControl(){
	char temp = getch();
	
	if(temp=='w'|| temp=='W'){
		return UP;
	} else if(temp =='a'|| temp == 'A'){
		return LEFT;
	} else if(temp == 's'|| temp == 'S'){
		return DOWN;
	} else if(temp == 'd'|| temp == 'D'){
		return RIGHT;
	} else if(temp == ' '){
		return SUBMIT;
	}
}
void init(){
	system("mode con cols =56 lines=20 | title ��������");
}

void titleDraw(){
	printf("\n\n\n\n");
	printf(" ##### #   #   ###   #     #  #### #    #\n");
	printf(" #     ##  #  #      #     # #     #    #\n");
	printf(" ####  # # # #   ### #     #  ###  ######\n");
	printf(" #     #  ##  #    # #     #     # #    #\n");
	printf(" ####  #   #   ####  ##### # ####  #    #\n");
}

void gotoxy( int x, int y){
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consoleHandle, pos);
}

int menuDraw(){
	int x = 24;
	int y = 12;
	gotoxy(x-2,y);
	printf("> ���ӽ���");
	gotoxy(x,y+1);
	printf("��������");
	gotoxy(x,y+2);	
	printf(" ���� ");
	while(1){
		int n = keyControl();
		switch(n){
			case UP: {
				if(y>12){
					gotoxy(x-2,y);
					printf(" ");
					gotoxy(x-2,--y);
					printf(">");
				}
				break;
			}
			case DOWN: {
				if(y<14){
					gotoxy(x-2,y);
					printf(" ");
					gotoxy(x-2,++y);
					printf(">");
				}
				break;
			}
			
			case SUBMIT:{
				return y-12;
			}
		}
	}
}


void game() {
	system("cls");
    srand(time(NULL));

    char ch;

    string list[]= {"millennia","prodigious","maligned","populate","extinction","intervening","impressive","sophisticated","hitherto","commerce","peculiar","indisputable"};
    int r = rand()%5;
    string str = list[r];
    cout<<"���ڸ� ���纸���� : ";
    string res(str.length(),'_');
    cout<<res<<endl;

    while(true){
        cout<<"���ڸ� �Է� : ";
        cin >> ch;

        for(int i=0; i<str.length(); i++){
            if(ch==str[i]){
                res[i]=ch;
                cout<<res<<endl;
            }
        }
        if(str== res){
            cout<<"����"<<endl;   
            break;
        }
    }
}

