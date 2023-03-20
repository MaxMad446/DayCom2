// Auto-generated module | 2026-05-11T21:43:07.302691
#include <iostream>
#include <vector>

int compute_460() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_460() << std::endl;
    return 0;
}
