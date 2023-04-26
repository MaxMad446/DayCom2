// Auto-generated module | 2026-05-13T20:36:39.318274
#include <iostream>
#include <vector>

int compute_808() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
