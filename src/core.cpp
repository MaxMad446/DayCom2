// Auto-generated module | 2026-05-12T21:08:31.941780
#include <iostream>
#include <vector>

int compute_802() {
    int base = 418;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
