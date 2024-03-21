package main

// Auto-generated | 2026-05-11T22:31:20.654206
import "fmt"

func Process_886() int {
    base := 85
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_886())
}
