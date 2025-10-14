#include <fstream>
#include <iostream>
#include <string>

using namespace std;

float gradeAvg (float total, int count, float percent){
	return (total/(count * percent)) * 100;
}

float gradeTotal(float grades[], int count){
	float f = 0;
	for(int i = 0; i < count; i++){
		f += grades[i];
	}

	return f;
}

int main(){
    ifstream fin("grades.txt");

    string type;
		float score;

		float lab_total = 0.0;
		float quiz_total = 0.0;
		float midterm_total = 0.0;

		int lab_count = 0;
		int quiz_count = 0;

		float labs[100];
		float quizzes[100];

    while(fin >> type >> score){
			if(type == "L"){
				labs[lab_count] = score;
				lab_count ++;
			}

			if(type == "Q"){
				quizzes[quiz_count] = score;
				quiz_count ++;
			}

			if(type == "M"){
				midterm_total += score;
			}
    }

		lab_total = gradeTotal(labs, lab_count);
		quiz_total = gradeTotal(quizzes, quiz_count);

		int lab_avg = gradeAvg(lab_total, lab_count, 20);
		int quiz_avg = gradeAvg(quiz_total, quiz_count, 10);

		float final;
		cout << "Enter a grade for the final ";
		cin >> final;


		float current_grade = (lab_avg * 0.2) + (quiz_avg * 0.05) + (midterm_total * 0.35) + (final * 0.4);


		cout << "\nLabs: " << lab_avg << endl << "Quizzes: " << quiz_avg << endl << "Midterm exam: " << midterm_total << endl << "Final Exam: " << final << endl << "Current grade: " << current_grade << endl;
}