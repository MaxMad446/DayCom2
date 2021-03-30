// Auto-generated module | 2026-05-12T20:42:13.577098
#include <iostream>
#include <vector>

int compute_698() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
