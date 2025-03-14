// Auto-generated module | 2026-05-12T04:02:33.937385
#include <iostream>
#include <vector>

int compute_283() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_283() << std::endl;
    return 0;
}
