// Auto-generated module | 2026-05-12T20:52:28.968129
#include <iostream>
#include <vector>

int compute_224() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
