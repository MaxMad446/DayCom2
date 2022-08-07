// Auto-generated module | 2026-05-14T06:16:32.403592
#include <iostream>
#include <vector>

int compute_302() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_302() << std::endl;
    return 0;
}
