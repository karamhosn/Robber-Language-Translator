#ifndef TRANSLATOR_H
#define TRANSLATOR_H

//include appropriate header files
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

//Translator class
class Translator{
    public:
        Translator(); //default constructor
        ~Translator(); //default destructor

        //core functions
        string translateEnglishWord(string& englishWord); //translates english word to robber language
        string translateEnglishSentence(string& englishSentence); //translates english sentence to robber language

    private:
        string robberEnglishWord; //robbler language word
        string robberEnglishSentence; //robber language sentence

};

#endif