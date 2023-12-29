// Auto-generated module | 2026-05-13T21:03:41.536787
#include <iostream>
#include <vector>

int compute_408() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_408() << std::endl;
    return 0;
}
