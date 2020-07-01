// Auto-generated module | 2026-05-11T19:33:23.312362
#include <iostream>
#include <vector>

int compute_282() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
