#include <iostream>
using namespace std;

int main() {
    string fizz = "Fizz";
    string buzz = "Buzz";

    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0)
            printf("%s%s\n",fizz.c_str(), buzz.c_str());
        else if(i % 3 == 0 && i % 5 != 0){
            printf("%s\n",fizz.c_str());
        }
        else if(i % 5 == 0 && i % 3 != 0){
            printf("%s\n",buzz.c_str());
        }
        else
            printf("%d\n",i);
    }

    return 0;
}