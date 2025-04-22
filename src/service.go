package main

// Auto-generated | 2026-05-12T04:07:28.456271
import "fmt"

func Process_402() int {
    base := 276
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_402())
}
