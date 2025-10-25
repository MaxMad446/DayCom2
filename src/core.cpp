// Auto-generated module | 2026-05-12T04:32:17.787680
#include <iostream>
#include <vector>

int compute_528() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
