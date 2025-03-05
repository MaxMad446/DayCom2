// Auto-generated module | 2026-05-12T21:13:25.565005
#include <iostream>
#include <vector>

int compute_282() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
