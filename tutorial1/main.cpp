#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main( int argc, char** argv ) {

    std::cout << "hello world" << std::endl;

    if ( argc != 1 ) {
        std::cout << "you entered " << argc <<
                    " agruments\n";
    }

    for ( int i = 0; i < argc; ++i ) {
        std::cout << argv[i] << "\n";
    }

    return 0;
}