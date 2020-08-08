# include <iostream>

using namespace std;

// ----- NOTES -----
// int* a 
// a -> stores address
// *a -> return value of what its pointing at

//int a
// a -> stores value
// &a -> return address/refernce where it's stored

int func(int *p, int q){
    // p -> b <- a
    cout << "p: " << p << ", *p: " << *p << ", &p:" << &p << endl;
    return 0;
}
int func2(int **p, int q){
    // p -> a -> b
    cout << "p: " << p << ", *p: " << *p << ", &p:" << &p << ", **p:" << **p << endl;
    return 0;
}
int main(int argc, char* agrv[]) {
    int b = 41;
    int *a = &b;
    cout << "a: " << a << ", a*:" << *a << ", b:" << b << ", &b:" << &b << ", &a: " << &a << endl;
    func(a, b);
    func2(&a, b);
    
    int* c = a;
    // c -> b <- a
    cout << "c: " << c << ", *c: " << *c << ", &c: " << &c << endl;

    return 0;
}
