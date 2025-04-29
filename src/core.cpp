// Auto-generated module | 2026-05-12T04:08:33.359453
#include <iostream>
#include <vector>

int compute_936() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
