#include <iostream>
using namespace std;

class Tracer {
public:
    Tracer(int id) { cout << "Tracer " << id << " created\n"; }
    ~Tracer() { cout << "Tracer destroyed\n"; }
};

int main() {
    for (int i = 0; i < 3; i++) {
        Tracer *t = new Tracer(i);
        delete t;  
    }
    return 0;
}
