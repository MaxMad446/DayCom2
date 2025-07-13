// Auto-generated module | 2026-05-12T04:18:13.486805
#include <iostream>
#include <vector>

int compute_423() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
