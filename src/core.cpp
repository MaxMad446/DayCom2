// Auto-generated module | 2026-05-12T04:42:01.885531
#include <iostream>
#include <vector>

int compute_247() {
    int base = 153;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_247() << std::endl;
    return 0;
}
