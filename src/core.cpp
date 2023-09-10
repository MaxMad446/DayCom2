// Auto-generated module | 2026-05-11T22:05:51.368253
#include <iostream>
#include <vector>

int compute_960() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
