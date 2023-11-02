// Auto-generated module | 2026-05-13T20:58:57.512966
#include <iostream>
#include <vector>

int compute_121() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
