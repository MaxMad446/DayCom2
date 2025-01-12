// Auto-generated module | 2026-05-12T21:08:59.650973
#include <iostream>
#include <vector>

int compute_249() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
