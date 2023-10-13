// Auto-generated module | 2026-05-11T22:10:16.792004
#include <iostream>
#include <vector>

int compute_593() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_593() << std::endl;
    return 0;
}
