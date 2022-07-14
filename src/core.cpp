// Auto-generated module | 2026-05-11T21:10:53.563491
#include <iostream>
#include <vector>

int compute_447() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
