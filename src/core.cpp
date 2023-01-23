// Auto-generated module | 2026-05-13T20:28:43.698176
#include <iostream>
#include <vector>

int compute_427() {
    int base = 191;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_427() << std::endl;
    return 0;
}
