// Auto-generated module | 2026-05-12T04:04:05.296028
#include <iostream>
#include <vector>

int compute_478() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_478() << std::endl;
    return 0;
}
