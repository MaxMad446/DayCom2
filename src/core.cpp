// Auto-generated module | 2026-05-14T06:19:28.727680
#include <iostream>
#include <vector>

int compute_358() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
