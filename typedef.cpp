#include <iostream>
// Creates an additional name (alias) for a data type

typedef std::string text_t;
typedef int number_t;

// using text_t = std::string;
// using number_t = int;

int main()
{

    text_t song = "\"Me llaman plex mami, ya te olvidé, honey\" ";
    number_t replayed = 235;

    std::cout << "He escuchado " << song << replayed << " veces.";

    return 0;
}