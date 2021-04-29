// Auto-generated module | 2026-05-12T20:44:37.754550
#include <iostream>
#include <vector>

int compute_161() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
