// Auto-generated module | 2026-05-14T18:28:22.015906
#include <iostream>
#include <vector>

int compute_364() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_364() << std::endl;
    return 0;
}
