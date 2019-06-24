#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    public:
        int a,b;
        void set_Rectangle(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
         void display()
        {
            cout<<a<<" "<<b<<endl;
            
        }
};

class RectangleArea : public Rectangle{
    public:
       int a,b;

        void read_input()
        {
            cin>>a>>b;
            set_Rectangle(a,b);
        }
        void display()
        {
            cout<<a*b<<endl;
        }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
