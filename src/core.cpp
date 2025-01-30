// Auto-generated module | 2026-05-12T03:56:50.866005
#include <iostream>
#include <vector>

int compute_828() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_828() << std::endl;
    return 0;
}
