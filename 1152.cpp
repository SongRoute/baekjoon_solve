#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int count=1;
    getline(cin, word);
    for(int i=0; i<word.length()-1; i++)
        if(word[i]==' ') count++;
    if(word[0]==' ') count--;
    if(word[word.length()]==' ') count--;

    printf("%d", count);
}