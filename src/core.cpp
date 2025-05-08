// Auto-generated module | 2026-05-12T04:09:35.212462
#include <iostream>
#include <vector>

int compute_114() {
    int base = 127;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_114() << std::endl;
    return 0;
}
