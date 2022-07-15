// Auto-generated module | 2026-05-14T06:14:54.692098
#include <iostream>
#include <vector>

int compute_893() {
    int base = 45;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_893() << std::endl;
    return 0;
}
