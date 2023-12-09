//Program that reads command line arguments and prints out them in upper case
//Program that reads stdin and prints out everything in upper case (bonus points for sharing upper case function implementation between programs 1 & 2)

#include <iostream>

char* userInput();

char* upperChar(char* text);

int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; ++i)
        std::cout << upperChar(argv[i]) << std::endl;
    std::cout << upperChar(userInput()) << std::endl;
    system("pause");
    return 0;
}
char* userInput() {
    char* userInput = new char;
    std::cout << "Please enter any text to upper it: " << std::endl;
    std::cin >> userInput;
    return userInput;
}

char* upperChar(char* text) {
    char* upperText = text;
    for (int i = 0; i < strlen(text); ++i)
        upperText[i] = toupper(text[i]);
    return upperText;
}

