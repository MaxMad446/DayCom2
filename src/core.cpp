// Auto-generated module | 2026-05-12T20:35:25.074097
#include <iostream>
#include <vector>

int compute_224() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
