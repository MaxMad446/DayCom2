// Auto-generated module | 2026-05-11T19:46:40.759225
#include <iostream>
#include <vector>

int compute_837() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
