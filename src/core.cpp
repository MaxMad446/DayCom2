// Auto-generated module | 2026-05-14T06:17:16.381612
#include <iostream>
#include <vector>

int compute_615() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
