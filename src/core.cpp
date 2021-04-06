// Auto-generated module | 2026-05-12T21:38:34.543684
#include <iostream>
#include <vector>

int compute_716() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
