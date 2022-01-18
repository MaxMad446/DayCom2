// Auto-generated module | 2026-05-13T22:02:04.053877
#include <iostream>
#include <vector>

int compute_500() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
