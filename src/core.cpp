// Auto-generated module | 2026-05-11T21:18:12.164241
#include <iostream>
#include <vector>

int compute_437() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
