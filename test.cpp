struct Node {
    int value;
    Node *next;
};

Node* funcA(Node* in) {
    Node *out = in;
    while (out->next != nullptr) {
	out = out->next;
    }
    funcB(in)->next = NULL;
    return out;
}

Node* funcB(Node* in) {
   if (in->next != nullptr) {
	funcB(in->next)->next = in;
   }
   return in;
}