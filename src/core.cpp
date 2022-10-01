// Auto-generated module | 2026-05-11T21:21:16.076698
#include <iostream>
#include <vector>

int compute_388() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
