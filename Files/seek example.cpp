#include <iostream>
#include <fstream>
#include <string.h>
 using namespace std;
 /*
 Things Covered So far
        ofstream - for out files (i.e. ofstream fout) (makes a file if not created)
        ifstream - for input files (i.e ifstream fin) (doesn't makes a file if not created)
        fstream - for both output/input files (doesn't makes a file if not created(not sure do check again) )
        ( mandatory explicit modes. The ones you need to know - ios::in|ios::out|ios:app|ios:binary)
                i.e fstream f;
                    f.open("sample.txt',ios::in|ios::out)
        now :-
        
        To move up or down in  file there are two kinds of pointers :-
           >file write pointer
           >file read pointer
           to get the position of file pointer we use tellg() & tellp() (file read pointer & file write pointer respectively)
           to set the position we use seekg() and seekp()  (file read pointer & file write pointer respectively)
              while changing a file pointer position you can give 3 options
                    f.seekg(2,ios::beg)  #move read pointer 2 bytes from starting
                    f.seekg(3,ios:cur) #move read pointer 3 bytes from current position
                    f.seekp(-2,ios:end) #move write pointer -2bytes from end
        
        Q.In the below question we would first try and write a integer to the file and then try and read it by going to the start
        of the file
 */
 
int main()
{
    fstream f;
    int i = 10;
    int j;
    
    f.open("xyz.txt", ios::out|ios::in); // first make the file as fstream doesn't open in by default
    f << i;                // put the integer in the files
    cout << "file read pointer at " << f.tellg() << endl; // tells the position of file read pointer
    cout << "file write pointer at " << f.tellp() << endl;  // tells the position of filw write pointer
    f.seekg(0,ios::beg); // moving the read pointer to position 0 to read the integer we have written
    f >> j; // read the integer into j
    cout << j;
    f.close();
    system("pause");
    return 0;
}
/*
 Question for you - given a file like 
 20
 30
 12
 11
 98
 96
 128
 1009
 
 Read it in reverse order? Hint: Use file.seekg(-2,ios::end)
 
 if you are unclear about what i taught. call me or go throught this tutorial for further clarification
 http://www.cplusplus.com/doc/tutorial/files/
*/
