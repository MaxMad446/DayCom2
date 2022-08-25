// Auto-generated module | 2026-05-14T06:18:06.100636
#include <iostream>
#include <vector>

int compute_854() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
