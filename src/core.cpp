// Auto-generated module | 2026-05-12T03:41:02.773362
#include <iostream>
#include <vector>

int compute_356() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
