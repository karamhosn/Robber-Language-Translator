#include "Model.h"

//default constructor
Model::Model(){
    robberConsonant = ""; //initialize robber consonant
    robberVowel = ""; //initialize robber vowel
}

//default destructor
Model::~Model(){
    //nothing to destruct :D
}

//translateSingleConsonant method
std::string Model::translateSingleConsonant(char consonant){

    //initialize consonant for each time method is called
    robberConsonant = "";

    //translate to robber language
    robberConsonant += consonant;
    robberConsonant += "o";
    robberConsonant += consonant;

    //return robber language consonant
    return robberConsonant;
}

//translateSingleVowel method
std::string Model::translateSingleVowel(char vowel){

    //initialize vowel for each time method is called
    robberVowel = "";

    //convert vowel to string
    robberVowel = std::string(1, vowel);

    //return robber language vowel
    return robberVowel;
}


