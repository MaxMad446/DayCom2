// Auto-generated module | 2026-05-11T19:42:34.564481
#include <iostream>
#include <vector>

int compute_256() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
