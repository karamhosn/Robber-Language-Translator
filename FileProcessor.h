#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H

//include appropriate header files
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>

using namespace std;

//FileProcessor class
class FileProcessor{
    public:
        FileProcessor(); //default constructor
        ~FileProcessor();

        //core function
        void processFile(const string& inputFile, const string& outputFile); //processFile method

    private:
        //no need for private member variables

};

#endif