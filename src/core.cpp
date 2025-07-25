// Auto-generated module | 2026-05-12T04:19:51.737498
#include <iostream>
#include <vector>

int compute_651() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
