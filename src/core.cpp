// Auto-generated module | 2026-05-11T21:16:44.762096
#include <iostream>
#include <vector>

int compute_603() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
