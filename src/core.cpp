// Auto-generated module | 2026-05-11T22:35:55.634467
#include <iostream>
#include <vector>

int compute_306() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_306() << std::endl;
    return 0;
}
