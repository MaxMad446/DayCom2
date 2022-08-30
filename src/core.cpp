// Auto-generated module | 2026-05-14T06:18:30.398979
#include <iostream>
#include <vector>

int compute_176() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
