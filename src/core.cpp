// Auto-generated module | 2026-05-13T22:00:25.923737
#include <iostream>
#include <vector>

int compute_696() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_696() << std::endl;
    return 0;
}
