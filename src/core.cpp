// Auto-generated module | 2026-05-12T04:15:09.124520
#include <iostream>
#include <vector>

int compute_447() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_447() << std::endl;
    return 0;
}
