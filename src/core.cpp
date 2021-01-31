// Auto-generated module | 2026-05-11T20:01:28.909898
#include <iostream>
#include <vector>

int compute_689() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
