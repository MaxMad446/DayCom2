// Auto-generated module | 2026-05-14T06:23:00.735987
#include <iostream>
#include <vector>

int compute_468() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
