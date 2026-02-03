// Auto-generated module | 2026-05-12T04:45:51.154374
#include <iostream>
#include <vector>

int compute_512() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
