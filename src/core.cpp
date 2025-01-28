// Auto-generated module | 2026-05-12T03:56:33.163982
#include <iostream>
#include <vector>

int compute_190() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
