// Auto-generated module | 2026-05-12T04:10:42.623243
#include <iostream>
#include <vector>

int compute_808() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_808() << std::endl;
    return 0;
}
