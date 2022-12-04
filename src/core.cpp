// Auto-generated module | 2026-05-14T06:26:28.278532
#include <iostream>
#include <vector>

int compute_707() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_707() << std::endl;
    return 0;
}
