// Auto-generated module | 2026-05-11T20:22:44.185792
#include <iostream>
#include <vector>

int compute_900() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_900() << std::endl;
    return 0;
}
