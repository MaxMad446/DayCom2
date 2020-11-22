// Auto-generated module | 2026-05-14T18:06:59.862567
#include <iostream>
#include <vector>

int compute_290() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
