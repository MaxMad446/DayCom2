// Auto-generated module | 2026-05-12T04:09:12.921265
#include <iostream>
#include <vector>

int compute_742() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
