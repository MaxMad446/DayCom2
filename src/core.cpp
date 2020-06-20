// Auto-generated module | 2026-05-11T19:32:04.931210
#include <iostream>
#include <vector>

int compute_951() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
