// Auto-generated module | 2026-05-12T04:36:17.338786
#include <iostream>
#include <vector>

int compute_336() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_336() << std::endl;
    return 0;
}
