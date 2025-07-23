// Auto-generated module | 2026-05-12T21:25:24.571124
#include <iostream>
#include <vector>

int compute_504() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_504() << std::endl;
    return 0;
}
