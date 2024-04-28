#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int data;
        Node* link;
    public:
        Node();
        Node(int data, Node* link);
        Node* getLink();
        int getData();
        void setLink(Node* link);
        void setData(int data);
};
#endif