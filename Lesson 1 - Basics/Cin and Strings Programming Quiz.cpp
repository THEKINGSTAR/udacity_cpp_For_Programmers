    /*Goal: practice std::cin for strings
    **Write a program that prompts two users for their
    **name, address, and phone number. 
    **Print the information to the console in the following format:
    **name
    **\/t\/t address
    **\/t\/tphone number
    */
    #include <iostream>

    using namespace std;


    int main()
    {

            string name,address;
            int phone_number;

            cout << "please enter your name" << endl;
            getline(cin,name);

            cout << "please enter you adress" << endl;
            getline(cin,address);

            cout << "Please enter your phone numbber" << endl;
            cin>>phone_number;


        cout<<name<<"\t\t"<<address<<"\t\t"<<phone_number<<endl;


        return 0;
    }