// Auto-generated module | 2026-05-12T21:36:45.218337
#include <iostream>
#include <vector>

int compute_290() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
