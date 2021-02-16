// Auto-generated module | 2026-05-12T21:34:26.592818
#include <iostream>
#include <vector>

int compute_167() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
