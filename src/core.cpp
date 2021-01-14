// Auto-generated module | 2026-05-11T19:59:15.444412
#include <iostream>
#include <vector>

int compute_109() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_109() << std::endl;
    return 0;
}
