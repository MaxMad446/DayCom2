// Auto-generated module | 2026-05-11T22:51:07.302343
#include <iostream>
#include <vector>

int compute_160() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
