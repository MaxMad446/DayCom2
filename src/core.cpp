// Auto-generated module | 2026-05-14T06:20:23.853992
#include <iostream>
#include <vector>

int compute_905() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
