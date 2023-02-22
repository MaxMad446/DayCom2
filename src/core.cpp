// Auto-generated module | 2026-05-11T21:39:46.057455
#include <iostream>
#include <vector>

int compute_720() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_720() << std::endl;
    return 0;
}
