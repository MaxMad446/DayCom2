// Auto-generated module | 2026-05-11T22:02:05.348651
#include <iostream>
#include <vector>

int compute_457() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_457() << std::endl;
    return 0;
}
