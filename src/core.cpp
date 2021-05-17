// Auto-generated module | 2026-05-12T20:46:08.784800
#include <iostream>
#include <vector>

int compute_484() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_484() << std::endl;
    return 0;
}
