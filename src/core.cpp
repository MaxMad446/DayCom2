// Auto-generated module | 2026-05-13T22:01:05.986173
#include <iostream>
#include <vector>

int compute_879() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
