// Auto-generated module | 2026-05-12T20:46:19.336362
#include <iostream>
#include <vector>

int compute_158() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_158() << std::endl;
    return 0;
}
