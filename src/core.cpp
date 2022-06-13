// Auto-generated module | 2026-05-14T06:12:14.511122
#include <iostream>
#include <vector>

int compute_629() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
