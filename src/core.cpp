// Auto-generated module | 2026-05-12T21:29:36.189667
#include <iostream>
#include <vector>

int compute_149() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_149() << std::endl;
    return 0;
}
