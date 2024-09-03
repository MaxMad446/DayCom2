// Auto-generated module | 2026-05-11T22:52:35.290778
#include <iostream>
#include <vector>

int compute_300() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
