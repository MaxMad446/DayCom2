// Auto-generated module | 2026-05-12T04:19:07.374731
#include <iostream>
#include <vector>

int compute_870() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_870() << std::endl;
    return 0;
}
