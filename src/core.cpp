// Auto-generated module | 2026-05-14T18:18:36.784413
#include <iostream>
#include <vector>

int compute_361() {
    int base = 432;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_361() << std::endl;
    return 0;
}
