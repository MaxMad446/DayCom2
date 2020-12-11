// Auto-generated module | 2026-05-11T19:54:54.253500
#include <iostream>
#include <vector>

int compute_869() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}
