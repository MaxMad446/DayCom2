// Auto-generated module | 2026-05-11T20:55:30.780821
#include <iostream>
#include <vector>

int compute_310() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
