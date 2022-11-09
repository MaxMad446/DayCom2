// Auto-generated module | 2026-05-11T21:26:09.881163
#include <iostream>
#include <vector>

int compute_684() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
