// Auto-generated module | 2026-05-12T04:43:11.493422
#include <iostream>
#include <vector>

int compute_615() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_615() << std::endl;
    return 0;
}
