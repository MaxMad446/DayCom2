// Auto-generated module | 2026-05-13T22:00:59.102290
#include <iostream>
#include <vector>

int compute_830() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
