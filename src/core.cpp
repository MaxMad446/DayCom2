// Auto-generated module | 2026-05-12T21:35:55.390758
#include <iostream>
#include <vector>

int compute_533() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
