// Auto-generated module | 2026-05-14T06:19:19.271858
#include <iostream>
#include <vector>

int compute_263() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_263() << std::endl;
    return 0;
}
