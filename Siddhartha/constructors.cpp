#include <iostream>
#include <string.h>

class MyString {
private:
    char* buffer;
public:
    MyString(const char* initString) {  // constructor
        buffer = nullptr;
        if (initString != nullptr) {
            buffer = new char[strlen(initString) + 1];
            strcpy(buffer, initString);
        }
    }

    MyString(const MyString& copySource) { // copy constructor
        buffer = nullptr;
        if (copySource.buffer != nullptr) {
            buffer = new char[strlen(copySource.buffer) + 1];
            strcpy(buffer, copySource.buffer);
        }
    }

    MyString(MyString&& MoveSource) { // move constructor
        if (MoveSource.buffer != nullptr) {
            buffer = MoveSource.buffer;
            MoveSource.buffer = nullptr;
        }
    }
};