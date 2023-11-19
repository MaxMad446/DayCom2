// Auto-generated module | 2026-05-11T22:15:06.162597
#include <iostream>
#include <vector>

int compute_448() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
