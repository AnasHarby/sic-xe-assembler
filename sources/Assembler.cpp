//
// Created by Mohamed A.Tolba on 5/1/2017.
//

#include "Assembler.h"

static Assembler *assembler = 0;

Assembler::~Assembler() {

//    delete assembler;
}

Assembler *Assembler::getInstance() {

    if (assembler == 0)
    {
        assembler = new Assembler();
    }
    return assembler;
}

void Assembler::execute(std::string fileName, std::map<std::string, std::string> options) {
    std::string intermediateFile = executePass1(fileName, options);
    executePass2(intermediateFile);
}

Assembler::Assembler() {
    //TODO check if we want to add any functionality
}

std::string Assembler::executePass1(std::string fileName, std::map<std::string, std::string> options) {
    std::string intermediateFile;
    //TODO implement this method
    return intermediateFile;
}

void Assembler::executePass2(std::string intermediateFileName) {
    //TODO implement this method
}
