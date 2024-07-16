// Auto-generated module | 2026-05-11T22:46:29.881941
#include <iostream>
#include <vector>

int compute_186() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
