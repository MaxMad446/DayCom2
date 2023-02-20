// Auto-generated module | 2026-05-13T20:31:07.568504
#include <iostream>
#include <vector>

int compute_675() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_675() << std::endl;
    return 0;
}
