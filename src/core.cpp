// Auto-generated module | 2026-05-11T22:13:41.469335
#include <iostream>
#include <vector>

int compute_568() {
    int base = 437;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
