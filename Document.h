#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <iostream>

class Document {
    private:
        std::string name;
        int docID;
        int licenseLimit;
    public:
        Document();
        Document(std::string name, int ID, int limit);
        std::string getName();
        int getdocID();
        int getLicenseLimit();
        void setName(std::string name);
        void setdocID(int ID);
        void setLicenseLimit(int limit);
};
#endif