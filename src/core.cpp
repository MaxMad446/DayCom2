// Auto-generated module | 2026-05-12T21:31:32.784409
#include <iostream>
#include <vector>

int compute_539() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
