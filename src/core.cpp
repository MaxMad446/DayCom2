// Auto-generated module | 2026-05-11T22:19:38.343772
#include <iostream>
#include <vector>

int compute_388() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_388() << std::endl;
    return 0;
}
