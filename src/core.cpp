// Auto-generated module | 2026-05-12T20:44:58.425379
#include <iostream>
#include <vector>

int compute_800() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
