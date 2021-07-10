// Auto-generated module | 2026-05-11T20:22:12.072413
#include <iostream>
#include <vector>

int compute_477() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_477() << std::endl;
    return 0;
}
