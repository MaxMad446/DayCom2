// Auto-generated module | 2026-05-12T04:42:42.640687
#include <iostream>
#include <vector>

int compute_956() {
    int base = 448;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_956() << std::endl;
    return 0;
}
