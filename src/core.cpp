// Auto-generated module | 2026-05-13T22:07:32.724491
#include <iostream>
#include <vector>

int compute_702() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_702() << std::endl;
    return 0;
}
