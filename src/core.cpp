// Auto-generated module | 2026-05-14T18:24:26.099943
#include <iostream>
#include <vector>

int compute_543() {
    int base = 478;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_543() << std::endl;
    return 0;
}
