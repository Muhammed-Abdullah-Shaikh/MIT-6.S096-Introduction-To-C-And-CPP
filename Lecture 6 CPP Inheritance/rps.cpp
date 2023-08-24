#include <iostream>

using namespace std;

class Tool {
	/* Fill in */
  // protected:
  public:
    int strength;
    char type;
  // public:
    void setStrength(int s)
    {
      strength = s;
    }
};

// Implement class Scissors
class Scissors : public Tool {
  public:
    Scissors(int s) {
      setStrength(s);
      Tool::type = 's';
    }
    bool fight(Tool t) {
      if (t.type == 'p') {
        return strength*2 > t.strength; 
      }
      else if (t.type == 'r') {
        return strength/2 > t.strength;
      }
    }
};

// Implement class Paper
class Paper : public Tool {
  public:
    Paper(int s) {
      setStrength(s);
      type = 'p';
    }
    bool fight(Tool t) {
      if (t.type == 's') {
        return strength/2 > t.strength; 
      }
      else if (t.type == 'r') {
        return strength*2 > t.strength;
      }
    }
};


// Implement class Rock
class Rock : public Tool {
  public:
    Rock(int s) {
      setStrength(s);
      type = 'r';
    }
    bool fight(Tool t) {
      if (t.type == 's') {
        return strength*2 > t.strength; 
      }
      else if (t.type == 'p') {
        return strength/2 > t.strength;
      }
    }
};

int main() {
	// Example main function
	// You may add your own testing code if you like

	Scissors s1(5);
	Paper p1(7);
	Rock r1(15);
	cout << s1.fight(p1) << p1.fight(s1) << endl;
	cout << p1.fight(r1) << r1.fight(p1) << endl;
	cout << r1.fight(s1) << s1.fight(r1) << endl;

	return 0;
}
