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
        std::string translateEnglishWord(std::string& englishWord); //translates english word to robber language
        std::string translateEnglishSentence(std::string& englishSentence); //translates english sentence to robber language

    private:
        std::string robberEnglishWord; //robbler language word
        std::string robberEnglishSentence; //robber language sentence

};

#endif