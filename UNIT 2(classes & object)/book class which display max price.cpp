 
/*
 
Write a c++ program to declare a class "Book" having data members book_name,author and price.
 
Accept and display data book having maximum price.
 
*/
 
#include<iostream>
 
using namespace std;
 
class Book
 
{
 
    public:
 
        char book_name[20];
 
        char author_name[20];
 
        float price;
 
 
        void get_book_info()
 
        {
 
            cout<<"\nEnter Book Name:";
 
            cin>>book_name;
 
            cout<<"\nEnter Author Name:";
 
            cin>>author_name;
 
            cout<<"\nEnter Book Price:";
 
            cin>>price;
 
        }
 
        void disp_book_info()
 
        {
 
                cout<<"\n*******BOOK INFO WHOSE PRICE IS GREATEST*******";
 
                cout<<"\nBook Name  :"<<book_name;
 
                cout<<"\nAuthor Name:"<<author_name;
 
                cout<<"\nBook Price :"<<price;
 
        }
 
};
 
int main()
 
{
 
 	int num;
 	cout<<"Enter number of books:";
 	cin>>num;
    Book b[num];

    for(int i=0;i<num;i++)
    {
    	cout<<"\nBook :"<<(i+1);
    	cout<<"\n-----------------------";
 
        b[i].get_book_info();
 
    }

	int maxIndex =0;
	 
    for(int i=0;i<num;i++)
 
    {      
 
        if(b[i].price>b[maxIndex].price)
 
        {
        	maxIndex = i;
        }    
 
    }
 
    b[maxIndex].disp_book_info();
 
    return 0;
 
    
 
}
 
