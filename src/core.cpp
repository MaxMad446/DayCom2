// Auto-generated module | 2026-05-13T22:07:38.999207
#include <iostream>
#include <vector>

int compute_869() {
    int base = 65;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}
