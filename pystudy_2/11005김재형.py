score=float(input("> 만족도를 입력하시오"))
if score == 100:
    print("완벽")
elif 80 <= score:
    print("매우 만족")
elif 60 <= score:
    print("보통")
elif 40 <= score:
    print("불만족")
elif 20 <= score:
    print("매우 불만족")
# if not
if not (score == 100):
    print("만점이 아니네요")
    print("만점이 되기 위해 주실 피드백 있나요?")
    kda=input(">피드백을 입력하시오")
# if a and b
if 40<=60:
    print("40 <= 60")
else:
    print("버근가?")
#리스트 설정하고 출력
alist = [1,2,3,4,5]

print(alist)

#비교연산자 사용하기
if 5 in alist:
    print("5가 있네")
if 52 not in alist:
    print("52가 없네?")

#특정한 위치에 있는 요소 출력하기
print(alist[1])

#리스트에 집어넣기
alist = alist + [1]
alist =alist * 2
alist.append(8)
print(alist)
#리스트에서 제외하기
del alist[1]
alist.remove(3)
alist.pop(2)
alist.pop()
print(alist)
#비파괴적으로 요소 제가(연산 적용x)
print(alist + [2])
print(alist * 3)

for element in alist:
    print(element)