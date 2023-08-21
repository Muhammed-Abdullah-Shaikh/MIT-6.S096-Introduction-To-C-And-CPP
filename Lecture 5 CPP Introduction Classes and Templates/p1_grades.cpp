#include <stdio.h>

char GRADE_MAP[] = { 'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};

class Grade {
    char *letter;
    int *percent;

    public:
        Grade();
        ~Grade();

        void setByPercent(int p){
            percent = new int;
            letter = new char;
            *percent = p;
            *letter = GRADE_MAP[p / 10];
        }

        void setByLetter(char l){
            letter = new char;
            percent = new int;
            *letter = l;
            *percent = 100 - (l - 'A') * 10 - 5;
        }

        void print(){
            printf("Grade: %d: %c\n", *percent, *letter);
        }
};


Grade::Grade(){
	percent = new int;
	letter = new char;
}

Grade::~Grade(){
    delete percent;
    delete letter;
}

int main() {
	Grade g;
	int percent;
	
	printf("Enter two grades separated by a space. Use a percentage for the first and letter for the second: ");
	scanf("%d", &percent);
	scanf("\n");
	
	g.setByPercent(percent);
	g.print();
	
	g.setByLetter(getchar());
	g.print();

	return 0;
}

// g++ -Wall p1_grades.cpp -o p1_grades