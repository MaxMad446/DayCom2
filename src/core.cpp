// Auto-generated module | 2026-05-11T22:35:36.929158
#include <iostream>
#include <vector>

int compute_266() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_266() << std::endl;
    return 0;
}
