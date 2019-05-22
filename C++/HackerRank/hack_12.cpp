#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  

	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
	Student(string firstName, string lastName,int id,vector<int> scores):Person(firstName,lastName,id)
	{
		this->testScores = scores;
	}
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
	char calculate()
	{
		char grade;
		int grade_sum=0,gsf=0;
		for(auto it=testScores.begin();it!=testScores.end();it++)
		{
			grade_sum += *it;
		}
		gsf=grade_sum/testScores.size();
		if(gsf<=100 && 90<=gsf)
			grade='O';
		if(gsf<90 && 80<=gsf)
			grade='E';
		if(gsf<80 && 70<=gsf)
			grade='A';
		if(gsf<70 && 55<=gsf)
			grade='P';
		if(gsf<55 && 40<=gsf)
			grade='D';
		if(gsf<40)
			grade='T';

		return grade;
	}
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}

