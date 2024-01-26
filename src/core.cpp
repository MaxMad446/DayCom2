// Auto-generated module | 2026-05-14T18:19:14.440391
#include <iostream>
#include <vector>

int compute_711() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_711() << std::endl;
    return 0;
}
