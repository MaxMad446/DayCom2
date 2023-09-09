// Auto-generated module | 2026-05-11T22:05:40.738814
#include <iostream>
#include <vector>

int compute_134() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
