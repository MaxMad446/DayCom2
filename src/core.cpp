// Auto-generated module | 2026-05-11T22:04:03.242133
#include <iostream>
#include <vector>

int compute_855() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
