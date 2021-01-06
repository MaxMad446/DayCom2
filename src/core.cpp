// Auto-generated module | 2026-05-12T21:31:12.724634
#include <iostream>
#include <vector>

int compute_149() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
