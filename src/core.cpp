// Auto-generated module | 2026-05-11T22:27:00.893969
#include <iostream>
#include <vector>

int compute_555() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
