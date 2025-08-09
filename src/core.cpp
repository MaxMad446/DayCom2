// Auto-generated module | 2026-05-12T21:26:52.589623
#include <iostream>
#include <vector>

int compute_623() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
