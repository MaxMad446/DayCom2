// Auto-generated module | 2026-05-12T21:12:49.440400
#include <iostream>
#include <vector>

int compute_339() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
