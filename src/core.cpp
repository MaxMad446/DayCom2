// Auto-generated module | 2026-05-12T04:05:43.155788
#include <iostream>
#include <vector>

int compute_448() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_448() << std::endl;
    return 0;
}
