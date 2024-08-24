#include <boost/regex.hpp>
#include <iostream>
#include <string>
#include <vector>
#include <filesystem>
#include "runtime.h"
#include "interpreter.h"

using std::string;
using std::cerr;
using std::cin;
using std::cout;
using std::vector;
using std::filesystem::path;

int main(int argc, char *argv[]) {
    runtime r;
    r.run();

    if (argc == 1) {
        // enter interactive mode
        interpreter p;
        p.interpret();
    } else if (argc >= 2) {
        // read in the python script name and check if it ends with ".py", if not, report error
        string script_name(argv[1]);
        path pth = path(script_name).extension();
        if (pth.string() != ".py") {
            cerr << "cpp-python: can't open file " << path(script_name).string()
                 << ": [Errno 2] No such file or directory" << endl;
            exit(1);
        }
        // transform char* argv[] to vector<string>
        vector<string> file_names;
        for (int i = 1; i <= argc - 1; i++) {
            file_names.emplace_back(argv[i]);
        }
        // create the interpreter
        interpreter p(script_name, file_names, false);
        // execute the script
        p.interpret();
    }
}
