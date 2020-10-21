// Auto-generated module | 2026-05-12T19:57:31.868324
#include <iostream>
#include <vector>

int compute_323() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_323() << std::endl;
    return 0;
}
