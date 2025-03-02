// Auto-generated module | 2026-05-12T21:13:10.897348
#include <iostream>
#include <vector>

int compute_160() {
    int base = 156;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
