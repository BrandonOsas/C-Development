#include "stdafx.h"
#include "Simpletron.h"
using namespace std;

void Simpletron::loadProgramIntoMemory(int *program)
{

	// Write instructions starting at address 0
	for (int i = 0; i < 8; i++)
	{
		memory[i] = program[i];
	}

}
void Simpletron::disassembleProgram()
{
	enum op {
		READ = 10,
		WRITE = 11,

		LOAD = 20,
		STORE = 21,

		ADD = 30,
		SUBTRACT = 31,
		DIVIDE = 32,
		MULTIPLY = 33,

		BRANCH = 40,
		BRANCHNEG = 41,
		BRANCHZERO = 42,
		HALT = 43
	};

	for (int i = 0; i < 8; i++)
	{
		int instructions = memory[i] / 100;
		// Extract operand
		int operand = memory[i] % 100;

		// Choose operation based on operationCode
		switch (instructions)
		{
				// IO
			case READ:
				cout <<i<<" : (" <<memory[i]<< ") READ to "<< inMemory<<operand <<endl;
				break;
			case WRITE:
				cout <<i<<" : (" << memory[i] << ") WRITE " << inMemory << operand <<" to CONSOLE"<< endl;
				break;
				// Memory
			case LOAD:
				//accumulator = operand;
				cout <<i<<" : (" << memory[i] << ") LOAD "<< inMemory << operand <<" into Acc"<<endl;

				break;
			case STORE:
				//operand = accumulator;
				cout <<i<<" : (" << memory[i] << ") STORE Acc into " << inMemory << operand << endl;

				break;
				// Math
			case ADD:
				//accumulator += operand;
				cout <<i<<" : (" << memory[i] << ") ADD " << inMemory << operand << endl;
				break;
			/*case SUBTRACT:
				//accumulator -= operand;
				cout << "SUBTRACT : " << operand << endl;
				break;
			case DIVIDE:
				//accumulator /= operand;
				cout << "DIVIDE : " << operand << endl;
				break;
			case MULTIPLY:
				//accumulator *= operand;
				cout << "MULTIPLY : " << operand << endl;
				break;
				// Control flow
			case BRANCH:
				//instCounter = accumulator;
				cout << "BRANCH : " << operand << endl;
				break;
			case BRANCHNEG:
				//if (accumulator < 0) instCounter = operand;
				cout << "BRANCHNEG : " << operand << endl;
				break;
			case BRANCHZERO:
				//if (accumulator == 0) instCounter = operand;
				cout << "BRANCHZERO : " << operand << endl;
				break;*/
			case HALT:
				//halt = true;
				cout << i <<" : ("<< memory[i] << ") HALT " << endl;
				break;
			default:
				cout << "Unrecogniced opcode: " << instructions << endl;
				halt = true;
		}
	}
	// Extract opcode
	
}
