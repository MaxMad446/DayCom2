// Auto-generated module | 2026-05-13T21:02:21.547741
#include <iostream>
#include <vector>

int compute_949() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
