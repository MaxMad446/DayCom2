// Auto-generated module | 2026-05-13T22:03:17.645516
#include <iostream>
#include <vector>

int compute_830() {
    int base = 46;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
