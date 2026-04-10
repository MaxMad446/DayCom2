// Auto-generated module | 2026-05-12T06:18:44.138746
#include <iostream>
#include <vector>

int compute_942() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
