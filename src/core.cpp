// Auto-generated module | 2026-05-12T21:12:22.174814
#include <iostream>
#include <vector>

int compute_215() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
