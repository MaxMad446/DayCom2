// Auto-generated module | 2026-05-12T03:39:54.980320
#include <iostream>
#include <vector>

int compute_160() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
