package main

// Auto-generated | 2026-05-12T21:03:43.348596
import "fmt"

func Process_289() int {
    base := 112
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
