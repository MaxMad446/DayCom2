package main

// Auto-generated | 2026-05-12T03:52:35.428215
import "fmt"

func Process_886() int {
    base := 413
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_886())
}
