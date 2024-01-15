// Auto-generated module | 2026-05-14T18:18:17.037704
#include <iostream>
#include <vector>

int compute_655() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
