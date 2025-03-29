#include <iostream>
#include "FileMerger.h"

int main() {
    std::cout << "Starting the file merging process..." << std::endl;

    FileMerger merger;
    merger.mergeFiles("input_directory", "output_file.txt");

    std::cout << "File merging completed!" << std::endl;
    return 0;
}