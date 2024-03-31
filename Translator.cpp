#include "Translator.h"
#include "Model.h"


//default constructor
Translator::Translator(){
    std::string robberEnglishWord = ""; 
    std::string robberEnglishSentence = "";
}


//default destructor
Translator::~Translator(){
    //nothing to destruct
}


//translateEnglishWord method
std::string Translator::translateEnglishWord(std::string& englishWord){

    //initialize robber language word for each time method is called
    robberEnglishWord = "";

    //create model object
    Model modelObject;

    //for loop to iterate over input englishWord and translate to robber language
    for (int i = 0; i < englishWord.length(); ++i){

        //define character c
        char c = englishWord[i];


        //checking if c is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {

            //call translation function for vowel and add to robber language word
            robberEnglishWord += modelObject.translateSingleVowel(c);

        }
        else { //else it is a consonant

            //call consonant function for consonant and add to robber language word
            robberEnglishWord += modelObject.translateSingleConsonant(c);

        }
    }

    //return robber language word
    return robberEnglishWord;
}


//translateEnglishSentence method
std::string Translator::translateEnglishSentence(std::string& englishSentence){

    Translator translatorObject; //create translator object
    robberEnglishSentence = "";
    std::string englishWord = ""; //initialize english word string

    //for loop to iterate through english sentence
    for (int i = 0; i < englishSentence.length(); ++i){


        //if character is a letter concatonate to englishWord
	    if (std::isalpha(englishSentence[i])) {

            char c = englishSentence[i]; //create char c
            std::string str(1, c); //convert c to string type
		    englishWord += c; //add c to english word

	    }
	    else { //else character is not a letter (must be space or punctuation)

            //we now know there is an english word to translate
            //translate english word to robber language and add to robber sentence
            robberEnglishSentence += translatorObject.translateEnglishWord(englishWord);
		
            //create char c and convert to string (represents space or punctuation found)
		    char c = englishSentence[i]; 
            std::string str(1, c);

            //add c to robber sentence 
            robberEnglishSentence += c;

            //reset english word
	        englishWord = "";

	    }
    }

    robberEnglishSentence += translatorObject.translateEnglishWord(englishWord); //accounts for lack of punctuation

    //return robber language sentence
    return robberEnglishSentence;
}