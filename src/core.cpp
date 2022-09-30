// Auto-generated module | 2026-05-11T21:21:05.080944
#include <iostream>
#include <vector>

int compute_871() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
