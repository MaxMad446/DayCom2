// Auto-generated module | 2026-05-13T22:11:25.671501
#include <iostream>
#include <vector>

int compute_928() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_928() << std::endl;
    return 0;
}
