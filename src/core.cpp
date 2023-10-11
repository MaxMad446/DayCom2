// Auto-generated module | 2026-05-11T22:09:59.190817
#include <iostream>
#include <vector>

int compute_405() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_405() << std::endl;
    return 0;
}
