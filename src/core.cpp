// Auto-generated module | 2026-05-14T18:09:46.130900
#include <iostream>
#include <vector>

int compute_969() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
