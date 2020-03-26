#include <iostream>
#include <string.h>

/*
A program by Dan Bennett
*/

using namespace std;

void PrintGreeting(string greeting);

int main(int argc, char * argv[]) {

    string greeting = "Hello World";

    if (argc > 1) {
        if (!strcmp(argv[1], "German")){
	    greeting = "Hallo Welt!";
	} else if (!strcmp(argv[1],"Pig") ) {
	    greeting = "elloHay orldWay!";
	} else if (!strcmp(argv[1],"Spanish") ) {
	    greeting = "Hola Mundo!";
	}
    }

    PrintGreeting(greeting);
    return 0;
}

void PrintGreeting(string greeting) {
    cout << greeting << endl;
    return;
}