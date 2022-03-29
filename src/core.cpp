// Auto-generated module | 2026-05-11T20:56:28.297124
#include <iostream>
#include <vector>

int compute_202() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
