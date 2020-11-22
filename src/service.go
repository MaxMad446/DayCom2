package main

// Auto-generated | 2026-05-11T19:52:25.038269
import "fmt"

func Process_242() int {
    base := 115
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_242())
}
