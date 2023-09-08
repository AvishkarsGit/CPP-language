//Structure concept in C++
#include<iostream> 
using namespace std; 
struct Book
{
    int BookId;
    char Book_Name[10];
    char Book_Author_Name[10]; 
    float Book_Price;
}b1, b2,b3; 
int main()
{  
    cout<<"Enter Book ID:";
    cin>>b1.BookId;
    cout<<"\nEnter Book Name:";
    cin>>b1.Book_Name;
    cout<<"\nEnter Book Author Name:";
    cin>>b1.Book_Author_Name;
    cout<<"\nEnter Book Price:";
    cin>>b1.Book_Price;
    cout<<"Enter Book ID:";
    cin>>b2.BookId;
    cout<<"\nEnter Book Name:";
    cin>>b2.Book_Name;
    cout<<"\nEnter Book Author Name:";
    cin>>b2.Book_Author_Name;
    cout<<"\nEnter Book Price:";
    cin>>b2.Book_Price;
    cout<<"Enter Book ID:";
    cin>>b3.BookId;
    cout<<"\nEnter Book Name:";
    cin>>b3.Book_Name;
    cout<<"\nEnter Book Author Name:";
    cin>>b3.Book_Author_Name;
    cout<<"\nEnter Book Price:";
    cin>>b3.Book_Price;
    cout<<"\n****************************************";
    cout<<"\n*******VJTech Book Store*******";
    cout<<"\n****************************************";
    cout<<"\nBOOKID\tBNAME\tAUTHOR\tPRICE";
    cout<<"\n----------------------------";
    cout<<"\n"<<b1.BookId<<"\t"<<b1.Book_Name<<"\t"<<b1.Book_Author_Name<<"\t"<<b1.Book_Price;
    cout<<"\n"<<b2.BookId<<"\t"<<b2.Book_Name<<"\t"<<b2.Book_Author_Name<<"\t"<<b2.Book_Price;    
    cout<<"\n"<<b3.BookId<<"\t"<<b3.Book_Name<<"\t"<<b3.Book_Author_Name<<"\t"<<b3.Book_Price; 
    return 0;
}
