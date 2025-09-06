// Auto-generated module | 2026-05-12T21:29:32.182711
#include <iostream>
#include <vector>

int compute_255() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_255() << std::endl;
    return 0;
}
