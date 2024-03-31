#ifndef MODEL_H
#define MODEL_H

//include appropriate header files
#include<iostream>
#include<string>

using namespace std;

//Model class
class Model{
    public:
        Model(); //default constructor
        ~Model(); //default destructor

        //core functions
        std::string translateSingleConsonant(char consonant); //translates consonant in Robber Language 
                                                              //(preserves capitals, returns string)
        std::string translateSingleVowel(char vowel); //translates vowel in Robber Language (preserves capitals, returns string)

    private:
        std::string robberConsonant; //robber consonant
        std::string robberVowel; //robber vowel

};

#endif