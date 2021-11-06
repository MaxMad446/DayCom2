// Auto-generated module | 2026-05-12T21:00:54.210246
#include <iostream>
#include <vector>

int compute_810() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_810() << std::endl;
    return 0;
}
