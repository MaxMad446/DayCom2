// Auto-generated module | 2026-05-12T21:20:52.239245
#include <iostream>
#include <vector>

int compute_983() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
