// Auto-generated module | 2026-05-13T22:08:43.420688
#include <iostream>
#include <vector>

int compute_332() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
