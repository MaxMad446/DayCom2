// Auto-generated module | 2026-05-11T22:20:54.074307
#include <iostream>
#include <vector>

int compute_716() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_716() << std::endl;
    return 0;
}
