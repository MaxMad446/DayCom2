// Auto-generated module | 2026-05-12T03:40:07.303825
#include <iostream>
#include <vector>

int compute_597() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_597() << std::endl;
    return 0;
}
