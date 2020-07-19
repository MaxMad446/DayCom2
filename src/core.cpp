// Auto-generated module | 2026-05-11T19:35:35.333528
#include <iostream>
#include <vector>

int compute_102() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
