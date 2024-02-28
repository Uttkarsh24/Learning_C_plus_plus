#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class movie
{
public:
    int year;
    char title[100];
    char direc[100];
    void setTitle(char *);
    void setdirector(char *);
    void setyear(int);
};
void movie::setTitle(char *p)
{
    strcpy(title, p);
}
void movie::setyear(int y)
{
    year = y;
}
void movie::setdirector(char *q)
{
    strcpy(direc, q);
}
int main()
{
    char nam[100], driec[100];
    int years;
    cout << "Enter name of movie:" << endl;
    fgets(nam, 100, stdin);
    cout << "Enter director of movie:" << endl;
    fgets(driec, 100, stdin);
    cout << "Enter year of movie:" << endl;
    cin >> years;
    movie mv;
    mv.setTitle(nam);
    mv.setdirector(driec);
    mv.setyear(years);
    cout << "Title:" << mv.title << endl
         << "Director:" << mv.direc << endl
         << "Year:" << mv.year;
    return 0;
}