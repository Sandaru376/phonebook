#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

struct contact{ //create data structures
    string Name;
    string Mobile;
    string email;
};

contact NewRec;
int choice;


void main_Menu(){
      cout<<"\t\t\t Phonebook \n";
      cout<<"\t\t\t~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
      cout<<"\t\t\t Select your option"<<endl;

      cout<<"\t\t\t 1. Add new record"<<endl;
      cout<<"\t\t\t 2. Display record "<<endl;

      cout<<"\t\t\t 3.exit"<<endl;
      cout<<"input your choice=";
      cin>>choice;
}




void Insert_New(){

    ofstream file;
    file.open("myphonebook.txt",ios::app);
    cout<<"Welcome to phonebook Entry\n";
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";


        cout<<"input contact name to add:";
        cin>>NewRec.Name;
        cout<<"input Mobile Number to add:";
        cin>>NewRec.Mobile;
        cout<<"input email address to add:";
        cin>>NewRec.email;
        file<<"Name:" <<NewRec.Name <<endl;
        file<<"Mobile:"<<NewRec.Mobile<<endl;
        file<<"Email:"<<NewRec.email<<endl;
        file<<endl;
        file.close();
        cout<<"contact Added successfuly";

}

void Read_all(){
    ifstream inputfile("myphonebook.txt");
    string readline;
    while (getline(inputfile,readline)){
        cout<<readline<<endl;
    }

    inputfile.close();
}




int main()
{
    loop:
        main_Menu();
        system("cls");//call ms-doc commands such as cls
        switch(choice){
            case 1:Insert_New();
            case 2:Read_all();
            case 3:goto exit;
        }
        system("cls");
        goto loop;
        exit:
    return 0;
}
