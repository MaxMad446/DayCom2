// Auto-generated module | 2026-05-12T20:53:51.584679
#include <iostream>
#include <vector>

int compute_224() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
