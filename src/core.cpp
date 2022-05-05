// Auto-generated module | 2026-05-11T21:01:21.500790
#include <iostream>
#include <vector>

int compute_448() {
    int base = 170;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
