// Auto-generated module | 2026-05-13T21:01:02.196120
#include <iostream>
#include <vector>

int compute_553() {
    int base = 113;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_553() << std::endl;
    return 0;
}
