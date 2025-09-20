// Auto-generated module | 2026-05-12T04:27:27.388284
#include <iostream>
#include <vector>

int compute_441() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
