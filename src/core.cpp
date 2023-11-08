// Auto-generated module | 2026-05-13T20:59:30.148077
#include <iostream>
#include <vector>

int compute_512() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_512() << std::endl;
    return 0;
}
