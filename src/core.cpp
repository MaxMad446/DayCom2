// Auto-generated module | 2026-05-11T22:35:02.957646
#include <iostream>
#include <vector>

int compute_127() {
    int base = 467;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_127() << std::endl;
    return 0;
}
