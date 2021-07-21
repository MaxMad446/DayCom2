// Auto-generated module | 2026-05-11T20:23:49.803872
#include <iostream>
#include <vector>

int compute_741() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
