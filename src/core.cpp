// Auto-generated module | 2026-05-11T21:54:01.662239
#include <iostream>
#include <vector>

int compute_331() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
