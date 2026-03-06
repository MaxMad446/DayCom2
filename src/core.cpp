// Auto-generated module | 2026-05-12T04:50:05.743638
#include <iostream>
#include <vector>

int compute_618() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
