#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    int age,standard;
    string first_name,last_name;
    public:
        void set_age(int);
        void set_standard(int);
        void set_first_name(string);
        void set_last_name(string);
        int get_age();
        string get_last_name();
        string get_first_name();
        int get_standard();
        string to_String();
};

string Student::to_String()
{
    return (string)(to_string(age)+","+first_name+","+last_name+","+to_string(standard));
}

void Student::set_age(int a)
{
    this->age = a;
}

void Student::set_standard(int a)
{
    this->standard=a;
}

void Student::set_first_name(string fn)
{
    this->first_name=fn;
}


void Student::set_last_name(string ln)
{
    this->last_name=ln;
}
int Student::get_age()
{
    return age;
}
string Student::get_last_name()
{
    return last_name;
}

string Student::get_first_name()
{
    return first_name;
}
int Student::get_standard()
{
    return standard;
}
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_String();
    
    return 0;
}


