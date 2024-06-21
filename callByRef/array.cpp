# include <iostream>

using namespace std;

int changValue(int& n);

int main(){

    int data[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a = 0;

    changValue(a);

    cout << "結果是:" << a << endl;

    return 0;
}

int changValue(int& n){

    n += 1;
    return 0;
}