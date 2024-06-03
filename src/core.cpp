// Auto-generated module | 2026-05-11T22:40:55.460400
#include <iostream>
#include <vector>

int compute_286() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
