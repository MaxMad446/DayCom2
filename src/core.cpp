// Auto-generated module | 2026-05-12T21:04:19.295694
#include <iostream>
#include <vector>

int compute_658() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
