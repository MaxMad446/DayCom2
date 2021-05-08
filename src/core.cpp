// Auto-generated module | 2026-05-11T20:13:38.313215
#include <iostream>
#include <vector>

int compute_118() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
