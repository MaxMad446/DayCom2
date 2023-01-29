// Auto-generated module | 2026-05-13T20:29:17.534675
#include <iostream>
#include <vector>

int compute_267() {
    int base = 399;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
