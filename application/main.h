#include <vector>
#include <string>
#include <fstream>
using namespace std;

vector<string> read_file(string path)
{
    ifstream source(path);
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
    return lines;
}

string read_input_file(int argc, char* argv[])
{
    string input_file;
    for (int i = 0; i < argc; i++)
    {

        if (string(argv[i]) == "-i")
        {
            input_file = argv[i + 1];
        }
    }
    return input_file;
}

string read_output_file(int argc, char* argv[])
{
    string output_file;
    for (int i = 0; i < argc; i++)
    {

        if (string(argv[i]) == "-o")
        {
            output_file = argv[i + 1];
        }
    }
    return output_file;
}

void write_file(string path, vector<string> lines)
{
    ofstream destination(path);

    if (destination.is_open())
    {
        for (int i = 0; i < lines.size(); i++)
        {
            destination << lines[i];
        }
        destination.close();
    }
}