// Auto-generated module | 2026-05-11T22:48:46.557201
#include <iostream>
#include <vector>

int compute_815() {
    int base = 138;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
