// Auto-generated module | 2026-05-13T20:47:27.175485
#include <iostream>
#include <vector>

int compute_182() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_182() << std::endl;
    return 0;
}
