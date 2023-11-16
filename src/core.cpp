// Auto-generated module | 2026-05-11T22:14:45.453960
#include <iostream>
#include <vector>

int compute_953() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_953() << std::endl;
    return 0;
}
