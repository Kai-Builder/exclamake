#include "org/excla/src/main/build_targets.hpp"



int main() {
	project::makeRemake("path.excla");
	Build::Generate_();
}