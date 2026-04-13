// Auto-generated module | 2026-05-12T06:19:07.367525
#include <iostream>
#include <vector>

int compute_882() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_882() << std::endl;
    return 0;
}
