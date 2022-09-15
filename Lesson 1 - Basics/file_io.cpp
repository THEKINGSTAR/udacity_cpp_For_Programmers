
/*
The text shown below is the script for the video.
As with other programming languages, we can read and write files.

File IO Steps:

 - Include the <fstream> library 

 - Create a stream (input, output, both)
      - ofstream myfile; (for writing to a file)
      - ifstream myfile; (for reading a file)
      - fstream myfile; (for reading and writing a file)
 
 - Open the file  myfile.open(“filename”);
 - Write or read the file
 - Close the file myfile.close();

In the next quiz you are going to see the output stream and the input stream in action. 
Then I want you to play with this program by adding text to the input.txt file and then changing the ifstream and ofstream commands to fstream . 
Make sure that the text you write is read by the program.
*/

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    string line;


    //create an output stream to write to the file
    //append the new lines to the end of the file
    fstream myfileI ("input.txt", ios::app);
    
    if (myfileI.is_open())
    {
        myfileI << "\nI am adding a line.\n";
        myfileI << "I am adding another line.\n";
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    //create an input stream to read the file
    fstream myfileO ("input.txt");
    //During the creation of ifstream, the file is opened. 
    //So we do not have explicitly open the file. 
    if (myfileO.is_open())
    {
        while ( getline (myfileO,line) )
        {
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
}
