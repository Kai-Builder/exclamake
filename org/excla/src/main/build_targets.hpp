//
// Default MakeFile Generator
// Make MakeFiles To Debug Console Scripts.
// Kai-Builder
//
#include <cstdio>

#include <windows.h>

#include <fstream>

#include <string>

#include <iostream>

#include <string>

namespace project {
	void makeRemake(const std::string &_path) {
		
		using namespace std;
		
		
		ifstream ifs("exclafiles\\ExclamationBuilds.txt");
		if (ifs) {
			string PATH;
			ifs >> PATH;
		}
		else {
			CreateDirectory(R"("exclafiles")", nullptr);
			ofstream BUILD_LISTS("ExclamationBuilds.txt");
			BUILD_LISTS << _path << endl;
			BUILD_LISTS.close();
		}
	}
}
using namespace std;





using namespace project;

class Build {
public:
	// Generate Function For MakeFiles
	static void Generate_() {
		
		using namespace std;
		string path;
		printf("Generating Makefile.\n");
		ifstream ifile("exclafiles\\ExclamationBuilds.txt");
		if (ifile) {
			ifile >> path;
			cout << "Running. . ." << endl;
			ofstream MAKEOUTDIR("Makefile");
			MAKEOUTDIR << "# Compiling Exclamation Script.\nall:\n\texcla " << path << endl;
			system(("excla.exe " + path).c_str());
		}
		else {
			cout << "Assertion Failed. Error: No File to Run." << endl;
		}
	}
};

Build BUILD_OUT;