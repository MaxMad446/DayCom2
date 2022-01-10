// Auto-generated module | 2026-05-11T20:46:23.097316
#include <iostream>
#include <vector>

int compute_462() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
