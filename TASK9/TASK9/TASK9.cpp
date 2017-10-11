// TASK9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Simpletron.h"
using namespace std;

int testing[] = {
	1007, // Read A
	1008, // Read B
	2007, // Load A
	3008, // Add B
	2109, // Store C
	1109, // Write C
	4300 // Halt
};

int main()
{
	Simpletron cpu;
	cpu.loadProgramIntoMemory(testing);
	cpu.disassembleProgram();
	cout << "Finished loading program." <<endl;
	system("pause");
    return 0;
}

