// Auto-generated module | 2026-05-12T20:01:16.550479
#include <iostream>
#include <vector>

int compute_294() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
