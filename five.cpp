#include <iostream>
using namespace std;

class CarEngine {
private:
    int horsepower;

public:
    CarEngine(int hp) {
        if (hp >= 100 && hp <= 1000)
            horsepower = hp;
        else {
            cout << "Invalid horsepower! Setting default (150)\n";
            horsepower = 150;
        }
    }

    // Declare friend class
    friend class Mechanic;
};

class Mechanic {
public:
    void display(CarEngine e) {
        cout << "Engine Horsepower: " << e.horsepower << endl;
    }

    void upgrade(CarEngine &e, int newHP) {
        if (newHP >= 100 && newHP <= 1000) {
            e.horsepower = newHP;
            cout << "Horsepower upgraded successfully!\n";
        } else {
            cout << "Invalid upgrade! Must be between 100 and 1000.\n";
        }
    }
};

int main() {
    CarEngine engine(200);
    Mechanic m;

    m.display(engine);
    m.upgrade(engine, 500);
    m.display(engine);

    return 0;
}
