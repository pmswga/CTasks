#include <iostream>
using namespace std;

/*!
    Тип - определяет набор возможных значений и операций, выполняемых над объектом
    Объект - участок памяти, в котором хранится значение определённого типа
    Значение - набор битов в памяти, интепретируемый в соответсвии с этим типом
    Переменная - именованный объект
    Объявление - инструкция, приписывающая объекту определённое имя
    Определение - объявление, выделяющее память для объекта

    =================[Безопасны преобразования типов]=================
    
    bool -> char
    bool -> int
    bool -> double
    char -> int
    char -> double
    int  -> double
    
    =================[Безопасны преобразования типов]=================

    double -> int
    double -> char
    double -> bool
    int    -> char
    int    -> bool
    char   -> bool
    
*/

int main()
{
    char c = 'x';
    int i1 = c;
    int i2 = 'x';
    char c2 = i2;
    
    cout << c << " " << i1 << " " << c2 << " " << i2 << '\n';
    
    cout << '\n' << "----------------" << '\n';
    
    double d = 0;
    while(cin >> d)
    {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d == " << d << '\n'
             << "i == " << i << '\n'
             << "i2 == " << i2 << '\n'
             << "char(" << c << ")" << '\n';
    }
    
    double x {2.7};
    int y {x};
    int a {10000000};
    char b {127};
    
    cout << b;
}