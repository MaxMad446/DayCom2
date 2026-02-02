// Auto-generated module | 2026-05-12T04:45:40.044720
#include <iostream>
#include <vector>

int compute_263() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
