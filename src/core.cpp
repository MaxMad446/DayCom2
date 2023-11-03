// Auto-generated module | 2026-05-11T22:13:03.869430
#include <iostream>
#include <vector>

int compute_338() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_338() << std::endl;
    return 0;
}
