// Auto-generated module | 2026-05-12T20:40:33.414250
#include <iostream>
#include <vector>

int compute_507() {
    int base = 410;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
