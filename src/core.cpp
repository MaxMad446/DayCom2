// Auto-generated module | 2026-05-11T22:03:27.682666
#include <iostream>
#include <vector>

int compute_631() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_631() << std::endl;
    return 0;
}
