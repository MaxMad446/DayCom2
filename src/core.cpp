// Auto-generated module | 2026-05-11T22:35:02.107234
#include <iostream>
#include <vector>

int compute_871() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
