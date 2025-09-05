// Auto-generated module | 2026-05-12T21:29:25.517820
#include <iostream>
#include <vector>

int compute_834() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_834() << std::endl;
    return 0;
}
