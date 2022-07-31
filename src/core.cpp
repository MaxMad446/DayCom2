// Auto-generated module | 2026-05-14T06:16:02.182452
#include <iostream>
#include <vector>

int compute_656() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
