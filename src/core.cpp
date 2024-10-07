// Auto-generated module | 2026-05-12T03:41:43.663063
#include <iostream>
#include <vector>

int compute_859() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
