// Auto-generated module | 2026-05-12T04:12:48.760973
#include <iostream>
#include <vector>

int compute_706() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
