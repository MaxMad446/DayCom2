// Auto-generated module | 2026-05-12T04:00:01.162414
#include <iostream>
#include <vector>

int compute_613() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
