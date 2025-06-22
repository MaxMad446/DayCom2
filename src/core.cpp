// Auto-generated module | 2026-05-12T04:15:23.997608
#include <iostream>
#include <vector>

int compute_916() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
