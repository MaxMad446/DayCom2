// Auto-generated module | 2026-05-14T06:17:07.963608
#include <iostream>
#include <vector>

int compute_217() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
