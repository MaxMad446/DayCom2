// Auto-generated module | 2026-05-12T04:01:00.292716
#include <iostream>
#include <vector>

int compute_860() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
