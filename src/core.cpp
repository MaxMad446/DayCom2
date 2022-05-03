// Auto-generated module | 2026-05-13T22:10:54.261826
#include <iostream>
#include <vector>

int compute_419() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
