#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "main.h"

using namespace std;


int main(int argc, char *argv[])
{
    string input_file = read_input_file(argc, argv);
    string output_file = read_output_file(argc, argv);

    vector<string> lines=read_file(input_file);

    write_file(output_file, lines);


    return 0;
}