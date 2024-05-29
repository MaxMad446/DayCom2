// Auto-generated module | 2026-05-14T18:29:06.196373
#include <iostream>
#include <vector>

int compute_636() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
