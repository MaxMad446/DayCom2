// Auto-generated module | 2026-05-12T06:16:45.618611
#include <iostream>
#include <vector>

int compute_160() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
