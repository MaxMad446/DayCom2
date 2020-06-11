// Auto-generated module | 2026-05-11T19:30:40.933001
#include <iostream>
#include <vector>

int compute_968() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_968() << std::endl;
    return 0;
}
