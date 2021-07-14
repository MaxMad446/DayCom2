// Auto-generated module | 2026-05-12T20:51:04.892833
#include <iostream>
#include <vector>

int compute_567() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_567() << std::endl;
    return 0;
}
