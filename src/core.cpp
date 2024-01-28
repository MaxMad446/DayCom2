// Auto-generated module | 2026-05-14T18:19:24.455364
#include <iostream>
#include <vector>

int compute_134() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
