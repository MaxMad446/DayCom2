// Auto-generated module | 2026-05-11T20:20:10.822574
#include <iostream>
#include <vector>

int compute_856() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
