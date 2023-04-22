// Auto-generated module | 2026-05-13T20:36:19.457497
#include <iostream>
#include <vector>

int compute_567() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
