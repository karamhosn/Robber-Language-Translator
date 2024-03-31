#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"

//main function
int main (int argc, char **argv){

    FileProcessor fileProcessorObject; //instantiates a FileProcessor
    string infilename; //input file name
    string start; //variable that allows user to choose whether to start program or quit

    cout << endl << endl << "Welcome to the Robber Language Translator!" << endl;
    cout << endl;

    cout << "Upon inputting the name of your text file, the program will provide an HTML" << endl;
    cout << "web-file with your original text along with its Robber Language translation." << endl;
    cout << endl;

    //program start
    //takes string as user input where 's' indicates start
    cout << "Press 's' to start (otherwise program will exit): ";
    cin >> start;

    //if letter entered isn't 's', exit
    if (tolower(start[0]) != 's' || start.size() > 1) 
    {
        cout << endl << "Program has exited." << endl;
        cout << endl;
        return 0;
    }
    
    //ignore newline
    cin.ignore(1, '\n');
    cout << endl;

    //take infile name as input
    cout <<  "Input Filename (include .txt): ";
    cin >> infilename;
    cout << endl;

    //translates the input file to Rövarspråket using the file processor
    //provided input file is given by the user
    fileProcessorObject.processFile(infilename, "MyRLT.html");

    return 0;
}
