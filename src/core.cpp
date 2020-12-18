// Auto-generated module | 2026-05-14T18:10:47.346539
#include <iostream>
#include <vector>

int compute_164() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_164() << std::endl;
    return 0;
}
