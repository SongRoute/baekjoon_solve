#include <iostream>
#include <string> //string 헤더 사용법 공부할 것
using namespace std;

int main() {
    string word; //크기 지정하지 않는다...
    cin>>word;
    for(int i=0; i<word.length()/2; i++)//str.length 익숙해지자
        if(word[0]!=word[word.length()-1-i]) {
            printf("0");
            return 0;
        }
    printf("1");
    return 0;
}