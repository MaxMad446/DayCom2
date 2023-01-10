// Auto-generated module | 2026-05-11T21:34:22.622767
#include <iostream>
#include <vector>

int compute_746() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
