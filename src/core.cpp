// Auto-generated module | 2026-05-11T22:34:01.821956
#include <iostream>
#include <vector>

int compute_724() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
