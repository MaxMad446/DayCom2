// Auto-generated module | 2026-05-14T06:28:35.600408
#include <iostream>
#include <vector>

int compute_527() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_527() << std::endl;
    return 0;
}
