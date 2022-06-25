// Auto-generated module | 2026-05-14T06:13:15.862176
#include <iostream>
#include <vector>

int compute_616() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_616() << std::endl;
    return 0;
}
