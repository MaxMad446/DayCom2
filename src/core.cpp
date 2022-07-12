// Auto-generated module | 2026-05-14T06:14:40.712460
#include <iostream>
#include <vector>

int compute_942() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_942() << std::endl;
    return 0;
}
