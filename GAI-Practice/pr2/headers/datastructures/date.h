//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : date.h
//  @ Date : 11.10.17
//  @ Author :
//
//


#if !defined(_DATE_H)
#define _DATE_H


namespace DataStructures
{
    class Date
    {
    private:
        int day;
        int mount;
        int year;
    public:
        Date(int d, int m, int y);
        int getDay();
        int getMonth();
        int getYear();
    };
}

#endif  //_DATE_H