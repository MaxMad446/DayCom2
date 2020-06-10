// Auto-generated module | 2026-05-11T19:30:30.645049
#include <iostream>
#include <vector>

int compute_470() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
