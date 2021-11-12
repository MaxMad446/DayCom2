// Auto-generated module | 2026-05-12T21:01:21.517370
#include <iostream>
#include <vector>

int compute_131() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
