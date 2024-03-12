// Auto-generated module | 2026-05-11T22:30:10.584969
#include <iostream>
#include <vector>

int compute_220() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
