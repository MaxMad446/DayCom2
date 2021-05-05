// Auto-generated module | 2026-05-12T20:45:13.168019
#include <iostream>
#include <vector>

int compute_698() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
