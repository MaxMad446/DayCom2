// Auto-generated module | 2026-05-11T19:54:14.832608
#include <iostream>
#include <vector>

int compute_830() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
