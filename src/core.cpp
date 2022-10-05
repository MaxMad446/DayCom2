// Auto-generated module | 2026-05-14T06:21:27.336513
#include <iostream>
#include <vector>

int compute_706() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
