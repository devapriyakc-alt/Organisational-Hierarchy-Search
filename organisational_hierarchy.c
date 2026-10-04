#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for a tree node
// First-child/Next-sibling representation is used
struct Node {
    char name[30];
    struct Node *firstChild;
    struct Node *nextSibling;
};

// Function to create a new tree node
struct Node* createNode(const char *name) {
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    strcpy(newNode->name, name);
    newNode->firstChild = NULL;
    newNode->nextSibling = NULL;

    return newNode;
}

// Function to add a child to a parent node
void addChild(struct Node *parent, struct Node *child) {

    if (parent->firstChild == NULL) {
        parent->firstChild = child;
    }
    else {
        struct Node *temp = parent->firstChild;

        while (temp->nextSibling != NULL) {
            temp = temp->nextSibling;
        }

        temp->nextSibling = child;
    }
}

// Function to perform Level-Order Traversal
void levelOrder(struct Node *root) {

    struct Node *queue[20];
    int front = 0;
    int rear = 0;

    queue[rear++] = root;

    while (front < rear) {

        struct Node *current = queue[front++];

        printf("%s ", current->name);

        struct Node *child = current->firstChild;

        while (child != NULL) {
            queue[rear++] = child;
            child = child->nextSibling;
        }
    }
}

// Function to perform Linear Search
// Returns the number of comparisons
int linearSearch(char arr[][30], int n, const char *key) {

    int comparisons = 0;

    for (int i = 0; i < n; i++) {

        comparisons++;

        if (strcmp(arr[i], key) == 0) {
            return comparisons;
        }
    }

    return comparisons;
}

// Function to perform Binary Search
// Array must be sorted
// Returns the number of comparisons
int binarySearch(char arr[][30], int n, const char *key) {

    int low = 0;
    int high = n - 1;
    int comparisons = 0;

    while (low <= high) {

        int mid = (low + high) / 2;

        comparisons++;

        int result = strcmp(arr[mid], key);

        if (result == 0) {
            return comparisons;
        }
        else if (result < 0) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return comparisons;
}

// Main function
int main() {

    // Creating the organisational hierarchy nodes
    struct Node *CEO = createNode("CEO");
    struct Node *HR = createNode("HR");
    struct Node *Finance = createNode("Finance");
    struct Node *IT = createNode("IT");
    struct Node *Development = createNode("Development");
    struct Node *Testing = createNode("Testing");
    struct Node *Frontend = createNode("Frontend");
    struct Node *Backend = createNode("Backend");

    // Building the organisational hierarchy
    addChild(CEO, HR);
    addChild(CEO, Finance);
    addChild(CEO, IT);

    addChild(IT, Development);
    addChild(IT, Testing);

    addChild(Development, Frontend);
    addChild(Development, Backend);

    // Displaying the hierarchy using Level-Order Traversal
    printf("Level-order traversal:\n");
    levelOrder(CEO);

    printf("\n\n");

    // Sorted department names for searching
    char departments[7][30] = {
        "Backend",
        "Development",
        "Finance",
        "Frontend",
        "HR",
        "IT",
        "Testing"
    };

    // Departments to search
    const char *searchKeys[3] = {
        "HR",
        "Testing",
        "Backend"
    };

    // Displaying search comparison results
    printf("Search Comparison Results:\n");
    printf("Department\tLinear\tBinary\n");

    for (int i = 0; i < 3; i++) {

        int linear = linearSearch(
            departments, 7, searchKeys[i]
        );

        int binary = binarySearch(
            departments, 7, searchKeys[i]
        );

        printf("%-12s\t%d\t%d\n",
               searchKeys[i], linear, binary);
    }

    return 0;
}
