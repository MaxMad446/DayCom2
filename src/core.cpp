// Auto-generated module | 2026-05-12T21:35:00.434468
#include <iostream>
#include <vector>

int compute_317() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
