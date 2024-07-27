#include <iostream>
using namespace std;

int main()
{
	float Grades[]{4.9f, 9.5f, 5.6f, 2.5f, 9.6f, 6.4f, 7.5f, 9.8f, 8.7f, 10.0f};
	float GradesAverage = 0.0f;
	int Size = sizeof(Grades) / sizeof(Grades[0]);

	for (auto Grade : Grades)
	{ 
		GradesAverage += Grade;
		cout << Grade << " ";
	}
	cout << "\n";
	GradesAverage /= Size;
	cout << "The average of the above grades is " << GradesAverage << "\n";
}