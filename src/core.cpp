// Auto-generated module | 2026-05-12T04:10:27.030514
#include <iostream>
#include <vector>

int compute_328() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
