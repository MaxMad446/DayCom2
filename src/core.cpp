// Auto-generated module | 2026-05-11T22:18:03.581938
#include <iostream>
#include <vector>

int compute_621() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_621() << std::endl;
    return 0;
}
