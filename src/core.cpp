// Auto-generated module | 2026-05-11T22:09:19.726321
#include <iostream>
#include <vector>

int compute_342() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_342() << std::endl;
    return 0;
}
