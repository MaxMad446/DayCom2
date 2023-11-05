// Auto-generated module | 2026-05-11T22:13:18.599054
#include <iostream>
#include <vector>

int compute_347() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
