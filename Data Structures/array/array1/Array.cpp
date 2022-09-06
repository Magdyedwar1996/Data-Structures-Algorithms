# include <iostream>
# include <stdio.h>


using namespace std; 
int  main(void)
{
    struct Student
    {
        int age ; 
        char name[25] ;
        char dept[30];
        char address[50];
        char e_mail[40]; 
    };
    struct Student magdy = {24 , "Magdy Edwar Farid", 
	"Electrical Engineering ", "Minia-Samalout-23street",
	"magdiedwar47@hotmail.com"};
    //struct Student merna;
    //struct Student maged;
    cout << "The size of magdy struct is :"<< sizeof(magdy)<<endl;
    //cout << "The size of merna struct is :"<< sizeof(merna)<<endl;
    //cout << "The size of maged struct is :"<< sizeof(maged)<<endl;
    cout << "\n\n\n\n";
    cout <<"The size of age is :"<< sizeof(magdy.age )<<endl;
    cout <<"The size of name is :"<< sizeof(magdy.name )<<endl;
    cout <<"The size of dept is :"<< sizeof(magdy.dept )<<endl;
    cout <<"The size of address is :"<< sizeof(magdy.address )<<endl;
    cout <<"The size of e_mail is :"<< sizeof(magdy.e_mail )<<endl;
    
    cout <<"The  age is :"<< magdy.age <<endl;
    cout <<"The  name is :"<< magdy.name <<endl;
    cout <<"The  dept is :"<< magdy.dept <<endl;
    cout <<"The  address is :"<< magdy.address <<endl;
    cout <<"The  e_mail is :"<< magdy.e_mail <<endl;
    
    
    return 0 ; 
}
