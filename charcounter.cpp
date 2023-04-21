#include <string>
#include <vector>
#include <iostream>
#include <fstream>


int main(int argc, char *argv[])
{

  if (argc > 1){
    std::string arg1(argv[1]);
    std::ifstream myfile(arg1);
    std::string mystring;

    if (myfile.is_open()) {
        myfile >> mystring;
        std::cout << mystring.length() << std::endl;
        myfile.close();
        }

  }

  if (argc == 1){
      std::cout << "Enter a file path" << std::endl;
    }
}
