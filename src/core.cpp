// Auto-generated module | 2026-05-14T18:27:33.870824
#include <iostream>
#include <vector>

int compute_379() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
