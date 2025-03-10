// Auto-generated module | 2026-05-12T04:01:59.705439
#include <iostream>
#include <vector>

int compute_608() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_608() << std::endl;
    return 0;
}
