// Auto-generated module | 2026-05-12T04:34:29.494383
#include <iostream>
#include <vector>

int compute_977() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_977() << std::endl;
    return 0;
}
