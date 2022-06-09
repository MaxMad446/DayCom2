// Auto-generated module | 2026-05-14T06:11:56.867430
#include <iostream>
#include <vector>

int compute_713() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_713() << std::endl;
    return 0;
}
