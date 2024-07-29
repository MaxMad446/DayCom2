// Auto-generated module | 2026-05-11T22:48:11.606478
#include <iostream>
#include <vector>

int compute_835() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_835() << std::endl;
    return 0;
}
