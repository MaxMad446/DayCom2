// Auto-generated module | 2026-05-12T03:48:46.881723
#include <iostream>
#include <vector>

int compute_619() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_619() << std::endl;
    return 0;
}
