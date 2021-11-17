// Auto-generated module | 2026-05-12T21:01:52.504378
#include <iostream>
#include <vector>

int compute_302() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_302() << std::endl;
    return 0;
}
