// Auto-generated module | 2026-05-12T20:39:27.177251
#include <iostream>
#include <vector>

int compute_207() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
