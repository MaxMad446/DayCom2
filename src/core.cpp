// Auto-generated module | 2026-05-12T21:39:53.787087
#include <iostream>
#include <vector>

int compute_753() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
