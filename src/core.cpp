// Auto-generated module | 2026-05-14T06:16:48.527982
#include <iostream>
#include <vector>

int compute_726() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
