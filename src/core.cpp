// Auto-generated module | 2026-05-12T04:34:33.203295
#include <iostream>
#include <vector>

int compute_882() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
