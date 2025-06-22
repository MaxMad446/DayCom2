// Auto-generated module | 2026-05-12T04:15:22.609889
#include <iostream>
#include <vector>

int compute_618() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_618() << std::endl;
    return 0;
}
