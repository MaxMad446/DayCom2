// Auto-generated module | 2026-05-11T19:59:08.731063
#include <iostream>
#include <vector>

int compute_485() {
    int base = 322;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
