#include <iostream>

using namespace std;

const int table_size = 10;

int hash_func(int key) {
    return key % table_size; // simple mod function for hashing
}

int main() {
    int table[table_size] = {0}; // initialize all slots to 0
   
    int keys[] = {0}; // sample keys to insert
    cout<<"enter the elements--> ";0
     for(int i=0;i<table_size;i++){
     	
     	cin>>keys[i];
	}
	
    int num_keys = sizeof(keys)/sizeof(keys[0]); // calculate the number of keys

    // insert keys into the hash table
    for(int i=0; i<num_keys; i++) {
        int hash_val = hash_func(keys[i]);
        if(table[hash_val] == 0) {
            table[hash_val] = keys[i]; // if slot is empty, store the key
        } else {
            // if slot is not empty, use linear probing to find an empty slot
            int probe = (hash_val + 1) % table_size; // start probing from the next slot
            while(probe != hash_val && table[probe] != 0) { // search for an empty slot
                probe = (probe + 1) % table_size;
            }
            if(probe == hash_val) {
                cout << "Hash table is full, cannot insert " << keys[i] << endl;
            } else {
                table[probe] = keys[i]; // store the key in the empty slot
            }
        }
    }

    // print the hash table
    for(int i=0; i<table_size; i++) {
        cout << "table[" << i << "] = " << table[i] << endl;
    }

    return 0;
}
