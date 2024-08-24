//
// Created by legion on 2024/8/24.
//
#include <string>
#include <vector>

#ifndef PYTHON_INTERPRETER_H
#define PYTHON_INTERPRETER_H

using std::string;
using std::vector;

class interpreter {
private:
string script_name;
vector<string> files_name;
string command;
bool interactive;
public:
    /**
     * interpreter constructor
     * @param script_name the name of the script file
     * @param files_name the name of the file as a parameter to the script file
     * @param interactive if it's in interactive mode
     */
    interpreter(string script_name = "", vector<string> files_name={}, bool interactive=false);
    /**
     * close the files
     */
    ~interpreter();
    /**
     * read script from the script file
     * @return error code for read_script
     */
    int read_script();
    /**
     * interpret each python command
     * @return error code for interpreting command
     */
    int interpret();
};

#endif //PYTHON_INTERPRETER_H
