#include "Model.h"
#include "Translator.h"
#include "FileProcessor.h"

//main function
int main (int argc, char **argv){

    //instantiates a FileProcessor
    FileProcessor fileProcessorObject;

    //translates the input file to Rövarspråket using the file processor
    //provided input file is "input.txt"
    fileProcessorObject.processFile("input.txt", "output.html");

    return 0;
}
