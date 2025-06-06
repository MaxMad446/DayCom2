// Auto-generated module | 2026-05-12T04:13:14.959226
#include <iostream>
#include <vector>

int compute_706() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_706() << std::endl;
    return 0;
}
