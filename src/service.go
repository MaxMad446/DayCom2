package main

// Auto-generated | 2026-05-12T21:26:07.460627
import "fmt"

func Process_440() int {
    base := 126
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_440())
}
