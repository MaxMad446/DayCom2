// Auto-generated module | 2026-05-12T04:26:40.894211
#include <iostream>
#include <vector>

int compute_924() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_924() << std::endl;
    return 0;
}
