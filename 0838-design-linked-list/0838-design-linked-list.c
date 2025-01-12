


struct MyLinkedList{
    int value;
    struct MyLinkedList * next;
};

typedef struct MyLinkedList MyLinkedList; 

void printLinkedList(MyLinkedList * head){
    MyLinkedList * ptr = head;
    while(ptr != NULL){
        printf("%d->", ptr->value);
        ptr = ptr->next;
    }
    printf("\n");
}

MyLinkedList* myLinkedListCreate() {
    
    MyLinkedList * head = malloc(sizeof(MyLinkedList));
    head->next = NULL;
    head->value = -1;

    return head;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    MyLinkedList * ptr = obj; // Make sure we dont increment the head

    while (index > 0 && ptr != NULL){ // Iterate through until we hit the right node
        ptr = ptr->next;
        index--;
    }

    if (ptr == NULL){ // We hit the end of the linked list :(
        return -1;
    } else { // We hit the node!
        return ptr->value;
    }
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    printf("%d\n", obj->value);
    if (obj->value == -1){
        obj->value = val;
    } else {
        MyLinkedList * newPtr = malloc(sizeof(MyLinkedList));

        newPtr->value = obj->value;
        newPtr->next = obj->next;
        

        obj->value = val;
        obj->next = newPtr;
    }
    // printf("Add at head result:\n");
    // printLinkedList(obj);
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {

    if (obj->value == -1){ // There are no nodes yet
        obj->value = val;
        return;
    }

    //Creation of new node
    MyLinkedList * newPtr = malloc(sizeof(MyLinkedList));
    newPtr->value = val;
    newPtr->next = NULL;

    MyLinkedList * ptr = obj;
    while(ptr->next != NULL){ // Send the pointer to the end of the line
        ptr = ptr->next;
    }

    ptr->next = newPtr; // Assign the node to the last spot
    // printf("Add at tail result:\n");
    // printLinkedList(obj);
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {

    if(index == 0){ // Trying to add at head
        myLinkedListAddAtHead(obj, val);
        return;
    }

    MyLinkedList * ptr = obj; // Make sure we dont increment the head
    int inIndex = index;

    index -= 1;
    while (index > 0 && ptr != NULL){ // Iterate through until we hit the right node
        ptr = ptr->next;
        index--;
    }

    if (ptr == NULL){ // We hit the end of the linked list :(
        return;
    } else { // We hit the node
        MyLinkedList * afterPtr = ptr->next;

        MyLinkedList * newNode = malloc(sizeof(MyLinkedList));
        newNode->value = val;
        newNode->next = afterPtr;

        ptr->next = newNode;
    }

    // printf("Add at index %d result:\n", inIndex);
    // printLinkedList(obj);
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    if (obj == NULL || index < 0) {
        // Empty list or invalid index
        return;
    }

    MyLinkedList* ptr = obj; // Pointer to traverse the list

    if (index == 0) { // Special case: Deleting the head node

        if (obj->next == NULL){// There's only one node.
        obj->value = -1;
        return;
        } 
        MyLinkedList* temp = obj->next; // Save the next node
        obj->value = temp->value;           // Copy the value of the next node to the current head
        obj->next = temp->next;         // Update the head's next pointer
        free(temp);                     // Free the now-unnecessary next node
        // printf("Delete at index %d result:\n", index);
        // printLinkedList(obj);
        return;
    }

    // Traverse to the node before the target index
    while (index > 1 && ptr->next != NULL) {
        ptr = ptr->next;
        index--;
    }

    if (ptr->next == NULL) { // Index out of bounds
        return;
    }

    // Delete the target node
    MyLinkedList* temp = ptr->next;
    ptr->next = temp->next;
    free(temp);

    // printf("Delete at index %d result:\n", index);
    // printLinkedList(obj);
}



void myLinkedListFree(MyLinkedList* obj) {
    MyLinkedList * prev;
    
    while(obj != NULL){
        prev = obj; // Set to current
        obj = obj->next; // Move the head down
        free(prev); // Clear the old head node
    }
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/