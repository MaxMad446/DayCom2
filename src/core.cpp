// Auto-generated module | 2026-05-14T18:25:35.700797
#include <iostream>
#include <vector>

int compute_350() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_350() << std::endl;
    return 0;
}
