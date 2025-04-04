// Auto-generated module | 2026-05-12T21:15:51.631533
#include <iostream>
#include <vector>

int compute_363() {
    int base = 444;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_363() << std::endl;
    return 0;
}
