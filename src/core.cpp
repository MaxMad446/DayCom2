// Auto-generated module | 2026-05-12T21:34:36.884890
#include <iostream>
#include <vector>

int compute_622() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
