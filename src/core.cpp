// Auto-generated module | 2026-05-11T20:19:31.134578
#include <iostream>
#include <vector>

int compute_507() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
