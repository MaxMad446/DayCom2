// Auto-generated module | 2026-05-11T19:42:12.857331
#include <iostream>
#include <vector>

int compute_435() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
