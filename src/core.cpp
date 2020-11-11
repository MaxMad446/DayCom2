// Auto-generated module | 2026-05-11T19:50:51.151035
#include <iostream>
#include <vector>

int compute_591() {
    int base = 279;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_591() << std::endl;
    return 0;
}
