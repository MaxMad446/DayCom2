// Auto-generated module | 2026-05-14T18:24:59.791886
#include <iostream>
#include <vector>

int compute_219() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
