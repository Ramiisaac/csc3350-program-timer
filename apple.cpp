#include <stdio.h>
#include <iostream>
using namespace std;

void Looper(int loopIterations)
{
	for (int outerLoopIndex = 0; outerLoopIndex < loopIterations; outerLoopIndex++)
	{
		for (int innerLoopIndex = 0; innerLoopIndex < loopIterations; innerLoopIndex++)
		{
			//Do nothing
		}
	}
}

int main()
{
	const int LOOP_ITERATIONS = 50000;
	Looper(LOOP_ITERATIONS);
	return 0;
}