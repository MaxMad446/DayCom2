// Auto-generated module | 2026-05-14T18:07:11.548185
#include <iostream>
#include <vector>

int compute_423() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
