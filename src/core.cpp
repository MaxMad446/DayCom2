// Auto-generated module | 2026-05-12T04:41:07.098930
#include <iostream>
#include <vector>

int compute_282() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_282() << std::endl;
    return 0;
}
