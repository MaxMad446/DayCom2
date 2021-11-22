// Auto-generated module | 2026-05-12T21:02:19.073679
#include <iostream>
#include <vector>

int compute_261() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
