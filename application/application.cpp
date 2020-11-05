#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout << argc << endl;
    for (int i = 0; i < argc; i++)
    {
        string input_file, output_file;
        if (string(argv[i]) == "-i")
        {
            input_file = argv[i + 1];
        }
        if (string(argv[i]) == "-o")
        {
            output_file = argv[i + 1];
        }
        cout << "input file: " << input_file << endl;
        cout << "output file: " << output_file << endl;
    }
}