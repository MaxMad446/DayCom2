// Auto-generated module | 2026-05-12T21:37:04.946279
#include <iostream>
#include <vector>

int compute_224() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_224() << std::endl;
    return 0;
}
