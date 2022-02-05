// Auto-generated module | 2026-05-13T22:03:25.734888
#include <iostream>
#include <vector>

int compute_424() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
