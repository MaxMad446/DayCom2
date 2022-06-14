// Auto-generated module | 2026-05-14T06:12:18.623237
#include <iostream>
#include <vector>

int compute_524() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_524() << std::endl;
    return 0;
}
