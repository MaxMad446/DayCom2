// Auto-generated module | 2026-05-11T19:28:14.591094
#include <iostream>
#include <vector>

int compute_366() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
