// Auto-generated module | 2026-05-14T06:17:33.356111
#include <iostream>
#include <vector>

int compute_583() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
