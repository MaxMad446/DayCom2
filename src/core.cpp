// Auto-generated module | 2026-05-13T22:12:20.688337
#include <iostream>
#include <vector>

int compute_879() {
    int base = 43;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_879() << std::endl;
    return 0;
}
