// Auto-generated module | 2026-05-11T20:01:55.501730
#include <iostream>
#include <vector>

int compute_386() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_386() << std::endl;
    return 0;
}
