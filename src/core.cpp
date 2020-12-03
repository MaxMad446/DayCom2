// Auto-generated module | 2026-05-14T18:08:35.384951
#include <iostream>
#include <vector>

int compute_421() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_421() << std::endl;
    return 0;
}
