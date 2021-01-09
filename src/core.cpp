// Auto-generated module | 2026-05-12T21:31:29.287362
#include <iostream>
#include <vector>

int compute_652() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
