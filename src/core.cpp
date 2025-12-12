// Auto-generated module | 2026-05-12T04:38:39.554251
#include <iostream>
#include <vector>

int compute_907() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
