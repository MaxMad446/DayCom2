// Auto-generated module | 2026-05-14T18:10:09.540947
#include <iostream>
#include <vector>

int compute_508() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_508() << std::endl;
    return 0;
}
