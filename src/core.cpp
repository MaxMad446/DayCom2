// Auto-generated module | 2026-05-13T22:08:41.844800
#include <iostream>
#include <vector>

int compute_260() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
