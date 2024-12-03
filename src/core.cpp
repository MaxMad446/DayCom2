// Auto-generated module | 2026-05-12T03:49:06.911660
#include <iostream>
#include <vector>

int compute_274() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_274() << std::endl;
    return 0;
}
