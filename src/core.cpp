// Auto-generated module | 2026-05-12T04:05:36.315510
#include <iostream>
#include <vector>

int compute_676() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
