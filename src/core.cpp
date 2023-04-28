// Auto-generated module | 2026-05-13T20:36:47.964552
#include <iostream>
#include <vector>

int compute_523() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
