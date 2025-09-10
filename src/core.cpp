// Auto-generated module | 2026-05-12T04:26:13.844649
#include <iostream>
#include <vector>

int compute_636() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_636() << std::endl;
    return 0;
}
