// Auto-generated module | 2026-05-13T20:32:19.405340
#include <iostream>
#include <vector>

int compute_194() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_194() << std::endl;
    return 0;
}
