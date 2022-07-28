// Auto-generated module | 2026-05-11T21:12:52.160375
#include <iostream>
#include <vector>

int compute_854() {
    int base = 61;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_854() << std::endl;
    return 0;
}
