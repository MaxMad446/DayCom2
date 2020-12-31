// Auto-generated module | 2026-05-12T20:03:31.741397
#include <iostream>
#include <vector>

int compute_588() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
