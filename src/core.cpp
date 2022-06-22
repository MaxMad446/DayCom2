// Auto-generated module | 2026-05-14T06:13:02.983450
#include <iostream>
#include <vector>

int compute_768() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_768() << std::endl;
    return 0;
}
