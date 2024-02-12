// Auto-generated module | 2026-05-14T18:20:38.809955
#include <iostream>
#include <vector>

int compute_161() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_161() << std::endl;
    return 0;
}
