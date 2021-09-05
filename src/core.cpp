// Auto-generated module | 2026-05-12T20:55:41.541263
#include <iostream>
#include <vector>

int compute_330() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_330() << std::endl;
    return 0;
}
