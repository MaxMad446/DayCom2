// Auto-generated module | 2026-05-11T22:32:35.225985
#include <iostream>
#include <vector>

int compute_922() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
