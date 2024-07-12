// Auto-generated module | 2026-05-11T22:45:57.457581
#include <iostream>
#include <vector>

int compute_113() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
