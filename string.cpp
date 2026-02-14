#include<iostream>
int main(){

    std:: string name;
    //can not use space where string data type declared

    std:: cout << "Enter Your Name : ";
    std:: getline(std:: cin, name);

    //name.clear();
    //this will clear a name.

   // name.append("@gmail.com\n");
    //this will extend the string


    if (name.length() > 13){

        std:: cout << "Your name can't be over 13";
    }
    else if(name.empty()){
        std::cout<<"You did not enter your name \n";
    }
    
    else {
        std:: cout <<"Welcome";
    }
    
    std::string  hello;
    std::getline(std::cin,hello);

    // to insert somthing in a position
    // std::cout<<hello.insert(2,"%");

   // std:: cout << hello.at(2);

    //to find a something by declaring its index
    //std::cout << hello.find(' ');

    //to find index by declaring letter or space
    std::cout << hello.erase(0,2);
    //it is eliminate 0-2 characters

    return 0;
}
