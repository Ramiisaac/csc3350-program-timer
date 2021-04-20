#include <time.h>
#include <stdio.h>
#include <iostream>
#include <chrono>
using namespace std;

int main (){
    
    // input prompt for .cpp file name
    char filename[100];
    cout << "Name of .cpp file to be compiled: ";
    cin.getline(filename, 100);

    // assemble command to compile 
    // program using system()
    string str = "g++ ";
    str = str + " -o a.out " + filename;
    const char *command = str.c_str();

    // output system command
    cout << "Using system command: " << command << endl;

    // output status update
    cout << "Compiling and running file " << endl;

    auto start = chrono::steady_clock::now();   // start timer 
    system(command);                            // compile
    system("./a.out");                          // run
    auto end = chrono::steady_clock::now();     // end timer

    cout << "Execution time in nanoseconds: "
        << chrono::duration_cast<chrono::nanoseconds>(end - start).count() << " ns" << endl;
 
    cout << "Execution time in microseconds: "
        << chrono::duration_cast<chrono::microseconds>(end - start).count() << " µs" << endl;
 
    cout << "Execution time in milliseconds: "
        << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << endl;
 
    cout << "Execution time in seconds: "
        << chrono::duration_cast<chrono::seconds>(end - start).count() << " sec";

    // pause to exit
    int ch = getchar();

    return 0;
}