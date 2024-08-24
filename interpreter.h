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
    explicit interpreter(string script_name = "", vector<string> files_name={}, bool interactive=true);
    /**
     * close the files
     */
    ~interpreter();

    /**
     * read script file or show prompt for each command
     * @return error code for interpreting command
     */
    int interpret();

    /**
     * execute each command
     * @return error code for executing command
     */
    int execute();
};

#endif //PYTHON_INTERPRETER_H
