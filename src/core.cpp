// Auto-generated module | 2026-05-12T20:41:32.628620
#include <iostream>
#include <vector>

int compute_211() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
