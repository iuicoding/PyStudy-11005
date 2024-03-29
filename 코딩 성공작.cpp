#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
//키보드값 
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
			//게임시작  
		} else if(menuCode == 1){
			infoDraw();
			//게임정보  
		} else if(menuCode == 2){
			return 0;//종료 
		}
		system("cls");
	}
	titleDraw();
	int menuCode= menuDraw();
	printf("입력하신 키값은 %d 입니다\n", menuCode);
	game();
	return 0;
}	

void infoDraw(){
	system("cls");
	printf("\n\n");
	printf("            [조작법]\n\n");
	printf("            위로:w 아래로:s \n");
	printf("            sapiens에 나온 영어단어와 동의어가 나옵니다.");
	printf("           선택 :스페이스바\n\n\n\n\n\n ");
	printf("           개발자:11005 김재형\n\n");
	printf("      스페이스바를 누르면 메인화면으로 이동합니다.");
	
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
	system("mode con cols =56 lines=20 | title 게임제목");
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
	printf("> 게임시작");
	gotoxy(x,y+1);
	printf("게임정보");
	gotoxy(x,y+2);	
	printf(" 종료 ");
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
    cout<<"문자를 맞춰보세요 : ";
    string res(str.length(),'_');
    cout<<res<<endl;

    while(true){
        cout<<"문자를 입력 : ";
        cin >> ch;

        for(int i=0; i<str.length(); i++){
            if(ch==str[i]){
                res[i]=ch;
                cout<<res<<endl;
            }
        }
        if(str== res){
            cout<<"성공"<<endl;   
            break;
        }
    }
}

