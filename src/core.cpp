// Auto-generated module | 2026-05-12T01:52:51.654373
#include <iostream>
#include <vector>

int compute_566() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
