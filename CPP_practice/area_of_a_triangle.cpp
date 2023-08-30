//for C++ practice
#include <iostream>
#include <string>
using namespace std;


class Person{
    public:
        string name;
        int age;
        string favColor;
};

class Triangle {
    public:
        int sideA;
        int sideB;
        int sideC;
        Triangle(int a, int b, int c){
            sideA = a;
            sideB = b;
            sideC = c;
        }


        int triangleArea(){
            int s = (sideA + sideB + sideC)/2;
            int area = sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
            return area;
        }

};



int addTwoNumbers(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}


int main() {
    Triangle triangle(6, 5, 3);
    
    std::cout << triangle.triangleArea();
    return 0;
}