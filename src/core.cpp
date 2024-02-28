// Auto-generated module | 2026-05-14T18:21:58.025708
#include <iostream>
#include <vector>

int compute_372() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
