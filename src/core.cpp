// Auto-generated module | 2026-05-12T04:48:37.956114
#include <iostream>
#include <vector>

int compute_524() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
