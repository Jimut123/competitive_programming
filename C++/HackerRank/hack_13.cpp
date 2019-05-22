#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

/*
// Write your MyBook class here

class MyBook: public Book
{

	protected:
		int myBookPrice=0;
		//string myBookTitle;
		//string myBookAuthor;

    //   Class Constructor

    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    
    // Write your constructor here
    
    MyBook(string title,string author, int price):Book(title,author)
	{
		this->myBookPrice=price;
		//this->myBookTitle=title;
		//this->myBookAuthor=author;
	}
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    virtual void display()
    {
	    display();
	    cout<<"Title:"<<Book::title;//this->myBookTitle<<endl;
	    cout<<"Author:"<<Book::author;//this->myBookAuthor<<endl;
	    cout<<"Price:"<<myBookPrice;//this->myBookPrice<<endl;
    }
    // Write your method here
    
// End class
};

*/

class MyBook : Book{

    private:
        int price;
    public :
        MyBook(string title_,string author_,int price_) : Book(title_,author_) ,price(price_){}

        virtual void display(){
            cout << "Title: " <<Book::title << "\nAuthor: " << Book::author << "\nPrice: " << price << endl;
        }

};

int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}

