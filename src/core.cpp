// Auto-generated module | 2026-05-12T21:17:41.961233
#include <iostream>
#include <vector>

int compute_458() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_458() << std::endl;
    return 0;
}
