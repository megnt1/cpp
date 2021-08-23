class Test{
public:
    int a;
    // 명시적인 생성자 정의가 없는 경우
    // --> 컴파일러가 Test(){} 생성자를 추가해줌

    // Test(int a): a(a){ //멤버변수(매개변수)
    // }
};

int main() {
    Test a; // 어떤 생성자를 호출? -- 디폴트 생성자 Test() 호출
}