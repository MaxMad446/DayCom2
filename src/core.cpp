// Auto-generated module | 2026-05-12T21:31:25.277704
#include <iostream>
#include <vector>

int compute_447() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
