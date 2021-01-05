// Auto-generated module | 2026-05-12T21:31:08.201348
#include <iostream>
#include <vector>

int compute_810() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_810() << std::endl;
    return 0;
}
