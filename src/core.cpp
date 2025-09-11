// Auto-generated module | 2026-05-12T04:26:22.057715
#include <iostream>
#include <vector>

int compute_392() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_392() << std::endl;
    return 0;
}
