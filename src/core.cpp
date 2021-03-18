// Auto-generated module | 2026-05-12T21:36:52.970174
#include <iostream>
#include <vector>

int compute_263() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
