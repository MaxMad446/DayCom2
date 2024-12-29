// Auto-generated module | 2026-05-12T03:52:39.808341
#include <iostream>
#include <vector>

int compute_814() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
