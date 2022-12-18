// Auto-generated module | 2026-05-14T06:27:41.872679
#include <iostream>
#include <vector>

int compute_367() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
