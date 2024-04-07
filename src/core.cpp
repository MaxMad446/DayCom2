// Auto-generated module | 2026-05-11T22:33:33.019305
#include <iostream>
#include <vector>

int compute_310() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_310() << std::endl;
    return 0;
}
