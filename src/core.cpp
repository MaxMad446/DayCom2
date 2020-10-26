// Auto-generated module | 2026-05-12T19:57:59.308510
#include <iostream>
#include <vector>

int compute_461() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
