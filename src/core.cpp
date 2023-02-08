// Auto-generated module | 2026-05-11T21:38:03.190368
#include <iostream>
#include <vector>

int compute_461() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
