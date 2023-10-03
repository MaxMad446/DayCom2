// Auto-generated module | 2026-05-11T22:08:59.501925
#include <iostream>
#include <vector>

int compute_942() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
