// Auto-generated module | 2026-05-11T22:11:44.657733
#include <iostream>
#include <vector>

int compute_848() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_848() << std::endl;
    return 0;
}
