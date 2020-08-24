// Auto-generated module | 2026-05-11T19:40:29.145141
#include <iostream>
#include <vector>

int compute_282() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
