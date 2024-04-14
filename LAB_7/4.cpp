#include <iostream>
#include <string>
using namespace std;

class Staff
{
protected:
    int code;
    string name;

public:
    Staff(int = 0, string = "");
    void getData();
};
Staff::Staff(int c, string n)
{
    code = c;
    name = n;
}
void Staff::getData()
{
    cout << "Name:" << name << endl;
    cout << "code:" << code << endl;
}

/// class Teacher

class Teacher : public Staff
{
protected:
    string subject;
    int publications;

public:
    Teacher(string = "", int = 0, string = "", int = 0);
    void getData();
};
Teacher::Teacher(string n, int c, string sub, int pub) : Staff(c, n)
{
    subject = sub;
    publications = pub;
}
void Teacher::getData()
{
    Staff::getData();
    cout << "Subject:" << subject << endl;
    cout << "Publications:" << publications << endl;
}

/// typist class

class Typist : public Staff
{
protected:
    string speed;

public:
    Typist(string = "", int = 0, string = "");
    void getData();
};
Typist::Typist(string n, int c, string s) : Staff(c, n)
{
    speed = s;
}
void Typist::getData()
{
    Staff::getData();
    cout << "Speed:" << speed << endl;
}

/// officer class

class Officer : public Staff
{
protected:
    char grade;

public:
    Officer(char = '\0', string = "", int = 0);
    void getData();
};
Officer::Officer(char g, string n, int c) : Staff(c, n)
{
    grade = g;
}
void Officer::getData()
{
    Staff::getData();
    cout << "Grade:" << grade << endl;
}

/// regular class

class Regular : public Typist
{
public:
    Regular(string = "", int = 0, string = "");
    void getData();
};
Regular::Regular(string n, int c, string s) : Typist(n, c, s)
{
}
void Regular::getData()
{
    Typist::getData();
}

/// Casual class

class Casual : public Typist
{
protected:
    int wage;

public:
    Casual(string = "", int = 0, string = "", int = 0);
    void getData();
};
Casual::Casual(string n, int c, string s, int w) : Typist(n, c, s)
{
    wage = w;
}
void Casual::getData()
{
    Typist::getData();
    cout << "Wage:" << wage << endl;
}

/// main function

int main()
{

    Teacher teach("Uttkarsh", 420, "Java", 4);
    teach.getData();

    Regular reg("Uttkarsh", 420, "fast");
    reg.getData();

    Casual cash("Uttkarsh", 420, "fast", 10000);
    cash.getData();

    Officer off('S', "Uttkarsh", 420);
    off.getData();

    return 0;
}
