// Auto-generated module | 2026-05-12T04:25:36.858158
#include <iostream>
#include <vector>

int compute_209() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_209() << std::endl;
    return 0;
}
