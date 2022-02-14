// Auto-generated module | 2026-05-11T20:51:01.276911
#include <iostream>
#include <vector>

int compute_282() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
