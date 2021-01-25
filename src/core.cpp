// Auto-generated module | 2026-05-12T21:32:42.167739
#include <iostream>
#include <vector>

int compute_126() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_126() << std::endl;
    return 0;
}
