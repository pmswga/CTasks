/*1.8.18. �������� ���������, ������� ��������� �����, ������ ����� � ������������ �
���-�� ����������� ����� �������� � ����������.*/
#include <iostream>
using namespace std;
int main()
{
    int a,i,t,q;
    t=1;
    q=2;
    cin >> a;
    for(i=1; i<a; i++)
    {
        t=t+q;
        q++;
    }
    cout << t;
}
