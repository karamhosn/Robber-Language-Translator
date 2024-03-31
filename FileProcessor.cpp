#include "FileProcessor.h"
#include "Translator.h"
#include "Model.h"


//default constructor
FileProcessor::FileProcessor(){
    cout << "File processor constructor called" << endl;
}

//default destructor
FileProcessor::~FileProcessor(){
    cout << "File processor destructor called" << endl;
}

//processFile method
void FileProcessor::processFile(const std::string& inputFile, const std::string& outputFile){

    //open input file
    std::ifstream inFile(inputFile);
 
    //check if file is open
    if (!inFile.is_open()) {
        cout << "Error: Unable to open input file." << endl;
        return;
    }

    //read content from input file
    //and save to string englishText
    std::stringstream buffer;
    buffer << inFile.rdbuf();
    std::string englishText = buffer.str();

    //close input file
    inFile.close();

    //translate englishText to robber language
    //and save to string robberTranslation
    Translator translatorObject;
    std::string robberTranslation;
    robberTranslation = translatorObject.translateEnglishSentence(englishText);

    //open html output file 
    std::ofstream outFile(outputFile);
    if (!outFile.is_open()) {
        cout << "Error: Unable to open output file." << endl;
        return;
    }

    //write html content with original English text in bold and robber language translation in italics
    outFile << "<html>\n";
    outFile << "<body>\n";
    //outFile << "<p><b>Original English Text:</b></p>\n";
    outFile << "<p><b>" << englishText << "</b></p>\n";
    outFile << "<br/>\n";
    //outFile << "<p><i>Rövarspråket Translation:</i></p>\n";
    outFile << "<p><i>" << robberTranslation << "</i></p>\n";
    outFile << "</body>\n";
    outFile << "</html>\n";

    //close html file
    outFile.close();
}
