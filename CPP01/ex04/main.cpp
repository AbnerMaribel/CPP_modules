#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
    if(argc < 4) {
        std::cerr << "Wrong number of arguments" << std::endl;
    } else {
        std::string filename;
        std::string s1;
        std::string s2;
        std::string temp;
        filename = argv[1];
        s1 = argv[2];
        s2 = argv[3];
        std::string outFile = filename + ".replace";
        std::ifstream inputFileStream(filename);
        std::ofstream outputFileStream(outFile);
        if(!inputFileStream.is_open()) {
            std::cerr << "Can't open the file" << std::endl;
        } else {
            while(getline(inputFileStream, temp)) {
                if(temp == s1) {
                    outputFileStream << s2 << std::endl;
                }
                else {
                    outputFileStream << temp << std::endl;
                }
            }

        }
        inputFileStream.close();
        outputFileStream.close();
    }
    return 0;
}

