// Auto-generated module | 2026-05-12T04:47:17.802212
#include <iostream>
#include <vector>

int compute_174() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
