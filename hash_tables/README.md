C - Hash tables

Hash tables are a data structure used to store and retrieve key-value pairs efficiently. They are often referred to as dictionaries, associative arrays, or maps in other programming languages. Hash tables offer constant-time average-case performance for insertion, deletion, and retrieval operations.

In C, hash tables are typically implemented using arrays and linked lists (or other data structures) to handle collisions. Here's a basic overview of how a hash table works and how it can be implemented in C:

Hash Function: A hash function takes a key as input and produces an index in the hash table where the associated value will be stored. The goal of a good hash function is to distribute keys evenly across the array to minimize collisions.

Collision Handling: Collisions occur when two different keys map to the same index in the hash table. To handle collisions, various techniques are used, such as chaining (using linked lists at each index to store multiple key-value pairs) or open addressing (probing neighboring cells to find an empty slot).

Here's a simplified example of how a hash table could be implemented in C using chaining:

c
Copy code
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the maximum size of the hash table
#define TABLE_SIZE 100

// Structure to hold key-value pairs
typedef struct KeyValue {
    char* key;
    int value;
    struct KeyValue* next;
} KeyValue;

// Hash table structure
typedef struct HashTable {
    KeyValue* table[TABLE_SIZE];
} HashTable;

// Hash function
unsigned int hash(char* key) {
    unsigned int hash = 0;
    while (*key) {
        hash = (hash << 5) + *key++;
    }
    return hash % TABLE_SIZE;
}

// Function to insert a key-value pair into the hash table
void insert(HashTable* ht, char* key, int value) {
    unsigned int index = hash(key);
    KeyValue* newPair = (KeyValue*)malloc(sizeof(KeyValue));
    newPair->key = strdup(key);
    newPair->value = value;
    newPair->next = ht->table[index];
    ht->table[index] = newPair;
}

// Function to retrieve a value using a key from the hash table
int get(HashTable* ht, char* key) {
    unsigned int index = hash(key);
    KeyValue* pair = ht->table[index];
    while (pair) {
        if (strcmp(pair->key, key) == 0) {
            return pair->value;
        }
        pair = pair->next;
    }
    return -1; // Key not found
}

int main() {
    HashTable ht;
    memset(ht.table, 0, sizeof(ht.table)); // Initialize the hash table

    insert(&ht, "apple", 5);
    insert(&ht, "banana", 10);

    printf("Value for 'apple': %d\n", get(&ht, "apple"));
    printf("Value for 'banana': %d\n", get(&ht, "banana"));
    printf("Value for 'cherry': %d\n", get(&ht, "cherry"));

    return 0;
}
Please note that this is a basic example, and real-world implementations would require more considerations, such as handling memory management, dynamic resizing, and collision resolution strategies.





