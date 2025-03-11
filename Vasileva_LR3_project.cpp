// Vasileva Ekaterina
#include <iostream>
#include <limits>
#include <string>
#include <string.h>
#include <cmath>
#include <algorithm>
#include <random>
#include <set>
#include <cstring>
#include <typeinfo>
using namespace std;

const int infinity = std::numeric_limits<int>::max();

int control2(int min_control= -infinity, int max_control=infinity, string msg = "")
{
    //Vasileva Ekaterina
    int x = 0;
    cout << msg;
    while(!(cin >> x) || (cin.peek() != '\n')  || x <= min_control || x >= max_control){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"Вы ввели некорректные данные." << endl;
        cout << msg;
    }
    return x;

};

int InputQ (){

}

unsigned int IntputP (){

}

int modQonP (){

}

int divQonP (){

}


int main() {

    setlocale(LC_ALL, "Russian");

    int min_control = -1;
    int max_control = 5;

    int funcSelect = 0;
    for(;;)
    {
        cout << "\nВвести целое число Q";
        cout << "\nВвести натуральное число P (меньше Q)";
        cout << "\nНайти остаток от деления Q на P"; 
        cout << "\nНайти целую часть от деления Q на P";
        funcSelect = control2(min_control, max_control, "\nВведите номер задания, которое вы бы хотели решить, или 0, если хотите закончить: ");
        cin.ignore();


        switch (funcSelect)

        {

        case 0:
            return 0;
            break;

        case 1:
        {
            InputQ();
            break;
        }

        case 2:
        {
            IntputP();
            break;
        }

        case 3:
        {
            modQonP();
            break;
        } 

        case 4: 
        {
            divQonP();
            break;
        }


        }


    }
    return 0; 

}
