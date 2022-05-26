// Auto-generated module | 2026-05-13T22:12:51.259046
#include <iostream>
#include <vector>

int compute_328() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
