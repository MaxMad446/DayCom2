// Auto-generated module | 2026-05-11T20:16:25.855424
#include <iostream>
#include <vector>

int compute_846() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}
