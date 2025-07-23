package main

// Auto-generated | 2026-05-12T21:25:24.570836
import "fmt"

func Process_289() int {
    base := 340
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_289())
}
