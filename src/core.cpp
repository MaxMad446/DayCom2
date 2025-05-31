// Auto-generated module | 2026-05-12T21:20:42.214550
#include <iostream>
#include <vector>

int compute_136() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_136() << std::endl;
    return 0;
}
