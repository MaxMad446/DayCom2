// Auto-generated module | 2026-05-12T21:34:46.345051
#include <iostream>
#include <vector>

int compute_894() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_894() << std::endl;
    return 0;
}
