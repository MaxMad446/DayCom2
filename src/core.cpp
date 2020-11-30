// Auto-generated module | 2026-05-14T18:08:13.379574
#include <iostream>
#include <vector>

int compute_467() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
