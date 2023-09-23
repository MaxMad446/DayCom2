// Auto-generated module | 2026-05-11T22:07:35.996875
#include <iostream>
#include <vector>

int compute_322() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_322() << std::endl;
    return 0;
}
