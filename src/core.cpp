// Auto-generated module | 2026-05-12T04:25:05.720235
#include <iostream>
#include <vector>

int compute_473() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_473() << std::endl;
    return 0;
}
