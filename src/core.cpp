// Auto-generated module | 2026-05-14T06:13:27.662441
#include <iostream>
#include <vector>

int compute_789() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_789() << std::endl;
    return 0;
}
