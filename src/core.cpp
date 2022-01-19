// Auto-generated module | 2026-05-13T22:02:09.970698
#include <iostream>
#include <vector>

int compute_810() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_810() << std::endl;
    return 0;
}
