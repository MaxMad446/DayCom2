// Auto-generated module | 2026-05-11T21:35:30.416002
#include <iostream>
#include <vector>

int compute_911() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_911() << std::endl;
    return 0;
}
