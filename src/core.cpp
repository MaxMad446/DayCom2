// Auto-generated module | 2026-05-14T06:17:48.178435
#include <iostream>
#include <vector>

int compute_564() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
