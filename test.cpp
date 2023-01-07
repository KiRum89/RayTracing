#include <iostream>

class MyClass {
    public:
        MyClass() {}
        MyClass(const double& a)
        {prop_a = a;}

        public:
            double prop_a;

};

int main(){
    double b = 12.99;
    MyClass myclass = MyClass(b);

    std::cout<<myclass.prop_a;
}