// Auto-generated module | 2026-05-11T22:49:04.452442
#include <iostream>
#include <vector>

int compute_799() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
