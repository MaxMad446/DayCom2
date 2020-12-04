// Auto-generated module | 2026-05-14T18:08:43.618201
#include <iostream>
#include <vector>

int compute_384() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_384() << std::endl;
    return 0;
}
