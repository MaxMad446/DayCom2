// Auto-generated module | 2026-05-14T06:18:24.613367
#include <iostream>
#include <vector>

int compute_908() {
    int base = 408;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_908() << std::endl;
    return 0;
}
