#include <iostream>
#include <string>
#include "book.h"
#include "book.cpp"
using namespace std;

int main() {
    book.title = "The Shadow Wand";
    book.author = "Laurie Forest";
    book.count = 224;
    book.title1 = "Demain les chats";
    book.author1 = "Bernard Werber";
    book.count1 = 400;


    cout << "First Book:" << std::endl;
    cout << "Title: " << book.title << std::endl;
    cout << "Author: " << book.author << std::endl;
    scout << "Count: " << book.count << std::endl;

    cout << "Second Book:" << std::endl;
    cout << "Title: " << book.title1 << endl;
    cout << "Author: " << book.author1 << endl;
    cout << "Count: " << book.count1 << endl;



    return 0;
}
