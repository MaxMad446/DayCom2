// Auto-generated module | 2026-05-12T21:19:36.589092
#include <iostream>
#include <vector>

int compute_716() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
