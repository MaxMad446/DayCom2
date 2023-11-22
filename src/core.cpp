// Auto-generated module | 2026-05-11T22:15:30.997202
#include <iostream>
#include <vector>

int compute_396() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
