// Auto-generated module | 2026-05-12T04:27:06.853770
#include <iostream>
#include <vector>

int compute_622() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_622() << std::endl;
    return 0;
}
