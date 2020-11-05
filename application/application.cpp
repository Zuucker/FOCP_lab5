#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    string input_file, output_file;
    cout << argc << endl;
    for (int i = 0; i < argc; i++)
    {

        if (string(argv[i]) == "-i")
        {
            input_file = argv[i + 1];
        }
        if (string(argv[i]) == "-o")
        {
            output_file = argv[i + 1];
        }
    }
        cout << "input file: " << input_file << endl;
        cout << "output file: " << output_file << endl;

        ifstream source(input_file);
        vector<string> lines;
        string tmp;
        if (source.is_open())
        {
            while (getline(source, tmp))
            {
                lines.push_back(tmp);
            }
            source.close();
        }

    ofstream destination(output_file);

    if (destination.is_open())
    {
        for (int i = 0; i < lines.size(); i++)
        {
            destination << lines[i];
        }
    }


    return 0;
}