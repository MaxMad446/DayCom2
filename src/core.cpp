// Auto-generated module | 2026-05-13T21:01:57.678460
#include <iostream>
#include <vector>

int compute_331() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
