// Auto-generated module | 2026-05-12T21:38:29.409745
#include <iostream>
#include <vector>

int compute_383() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_383() << std::endl;
    return 0;
}
