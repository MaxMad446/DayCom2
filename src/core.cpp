// Auto-generated module | 2026-05-12T21:25:21.509195
#include <iostream>
#include <vector>

int compute_500() {
    int base = 288;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
