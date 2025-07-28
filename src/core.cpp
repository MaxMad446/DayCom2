// Auto-generated module | 2026-05-12T04:20:17.841930
#include <iostream>
#include <vector>

int compute_328() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
