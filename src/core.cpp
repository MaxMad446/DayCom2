// Auto-generated module | 2026-05-12T20:46:56.127715
#include <iostream>
#include <vector>

int compute_140() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
