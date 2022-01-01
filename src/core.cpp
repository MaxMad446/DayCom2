// Auto-generated module | 2026-05-11T20:45:16.697159
#include <iostream>
#include <vector>

int compute_936() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
