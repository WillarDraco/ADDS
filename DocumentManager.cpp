#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    Document* temp = new Document(name, id, license_limit);
    holder.push_back(temp);
    docCount[id] = holder.size() - 1;
}

void DocumentManager::addPatron(int patronID) {
    patrons[patronID] = 1;
}

int DocumentManager::search(std::string name) {// returns docid if name is in the document collection or 0 if the name is not in the collection
    for (int i = 0; i < holder.size(); i++) {
        if (holder[i]->getName() == name) {
            return holder[i]->getdocID();
        }
    }

    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
    if (patrons[patronID] != 1) {
        return false;
    }

    if (docCount[docid] > 0) {
        return true;
    }

    return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (patrons[patronID] != 1) {
        return;
    }

    docCount[docid] += 1;
}