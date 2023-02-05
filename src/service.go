package main

// Auto-generated | 2026-05-13T20:29:56.898299
import "fmt"

func Process_587() int {
    base := 141
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
