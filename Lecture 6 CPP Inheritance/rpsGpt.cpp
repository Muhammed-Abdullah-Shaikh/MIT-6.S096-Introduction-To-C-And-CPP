#include <iostream>

class Tool {
protected:
    int strength;
    char type;

public:
    void setStrength(int s) {
        strength = s;
    }

    bool fight(Tool opponent) {
        if (type == 'r') {
            if (opponent.type == 's') {
                return strength * 2 > opponent.strength;
            } else if (opponent.type == 'p') {
                return strength / 2 > opponent.strength;
            }
        } else if (type == 'p') {
            if (opponent.type == 'r') {
                return strength * 2 > opponent.strength;
            } else if (opponent.type == 's') {
                return strength / 2 > opponent.strength;
            }
        } else if (type == 's') {
            if (opponent.type == 'p') {
                return strength * 2 > opponent.strength;
            } else if (opponent.type == 'r') {
                return strength / 2 > opponent.strength;
            }
        }
        return strength > opponent.strength;
    }
};

class Rock : public Tool {
public:
    Rock(int s) {
        strength = s;
        type = 'r';
    }
};

class Paper : public Tool {
public:
    Paper(int s) {
        strength = s;
        type = 'p';
    }
};

class Scissors : public Tool {
public:
    Scissors(int s) {
        strength = s;
        type = 's';
    }
};

int main() {
    Scissors s1(5);
    Paper p1(7);
    Rock r1(15);
    std::cout << s1.fight(p1) << p1.fight(s1) << std::endl;
    std::cout << p1.fight(r1) << r1.fight(p1) << std::endl;
    std::cout << r1.fight(s1) << s1.fight(r1) << std::endl;

    return 0;
}

