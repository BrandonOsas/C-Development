#pragma once
#ifndef SIMPLETRON_H
#define SIMPLETRON_H

#include <string>
using namespace std;

class Simpletron
{
private:
	

	int accumulator = 0; 
	int memory[100]; 
	int inMemory = 0 ;
	int instructions = 0;
	int instCounter = 0; 
	int operand = 0; 
	int instRegister = 0;
	bool halt = 0;
	
public:
	Simpletron() {}
	void loadProgramIntoMemory(int *program);
	void disassembleProgram();
	//void programMemory();
	void execute();
};
#endif // !SIMPLETRON_H
