#include "Document.h"

Document::Document() {
    name = "";
    docID = -1;
    licenseLimit = -1;
}

Document::Document(std::string name, int ID, int limit) {
    this->name = name;
    docID = ID;
    licenseLimit = limit;
}

std::string Document::getName() {
    return name;
}

int Document::getdocID() {
    return docID;
}

int Document::getLicenseLimit() {
    return licenseLimit;
}
void Document::setName(std::string name) {
    this->name = name;
}

void Document::setdocID(int ID) {
    docID = ID;
}
void Document::setLicenseLimit(int limit) {
    licenseLimit = limit;
}