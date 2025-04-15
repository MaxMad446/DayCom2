// Auto-generated module | 2026-05-12T21:16:49.609588
#include <iostream>
#include <vector>

int compute_209() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
