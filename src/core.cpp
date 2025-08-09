// Auto-generated module | 2026-05-12T04:21:46.234467
#include <iostream>
#include <vector>

int compute_636() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
