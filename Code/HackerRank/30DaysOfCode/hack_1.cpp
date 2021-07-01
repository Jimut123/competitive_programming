#include <iostream>
#include <iomanip>
#include <limits>
#include <sstream>

using namespace std;

int main() {
    int i = 4,in;
    double d = 4.0,dou;
    string s = "HackerRank ",str;

// Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin>>in;
    
    // Print the sum of both integer variables on a new line.
    cout<<in+i<<endl;
    cin>>dou;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1);
    cout<<d+dou<<endl;
    cin.ignore();  //ignores an end of line character
    // Concatenate and print the String variables on a new line
    getline(cin,str);
    // The 's' variable above should be printed first.
   cout<<s<<str<<endl;
    return 0;
}
