// Auto-generated module | 2026-05-12T20:58:19.094575
#include <iostream>
#include <vector>

int compute_570() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_570() << std::endl;
    return 0;
}
