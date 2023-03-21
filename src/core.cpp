// Auto-generated module | 2026-05-11T21:43:13.808285
#include <iostream>
#include <vector>

int compute_871() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
