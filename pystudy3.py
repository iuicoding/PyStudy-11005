while True:
    string_input = input("정수 입력> ")
    if string_input.isdigit():
        number_input_a = int(string_input)
        print("원의 반지름:"number_input_a)
        print("원의 둘레:",2*3.14*number_input_a)
        print("원의 넓이:",3.14*number_input_a*number_input_a)
        break
    else:
        print("정수를 입력해주세요!")
    numbers = [52,273,32,103,90,10,275]

    print("#(2) 요소 내부에 있는 값 찾기")
    number = 10000

    if number in numbers:
        print("-{}는 {}위치에 있습니다.".format(number,numbers.index(number)))
    else
        print("- 리스트 내부에 없는 값입니다.")print()
    while True:
        print("test() 함수의 첫 줄입니다.")
        try:
            print("try 구문이 실행되었습니다.")
            break
            print("try구문의 return 키워드 뒤입니다")
        except:
            print("except 구문이 실행되었습니다.")
            break
        finally:
            print("finally 구문이 실행되었습니다.")
        print("test()함수의 마지막 줄입니다.")
    class 학생:
        def __init__(self,name,korean,math,english,science):
            self.name = name
            self.korea = korean
            self.math = math
            self.english = english
            self.science = science
        def 총점(self):
            return self.korean + self.math + self.english + self.science
        def 평균(self):
            return self.총점() / 4
        def 출력(self):
            print(self.name, self.총점(), self.평균(), sep="\t")

    # 학생 리스트를 선언합니다.
    students = [
        학생("윤인성", 87, 98, 88, 95),
        학생("연하진", 92, 98, 96, 98),
        학생("구지연", 76, 96, 94, 90),
        학생("나선주", 98, 92, 96, 92),
        학생("윤아린", 95, 98, 98, 98),
        학생("윤명월", 64, 88, 92, 92)
    ]
    #학생을 한 명씩 반복합니다.
    print("이름","총점","평균",sep="\t")
    for student in students:
        student.출력()
    class Student:
        def __init__(self, 이름, 나이):
            print("객체가 생성되었습니다.")
            self.이름 = 이름
            self.나이=나이
        def __del__(self):
            print("객체가 소멸되었습니다.")
        def 출력(self):
            print(self.이름,self.나이)

        student = student("육인성",3)
        student.출력()


