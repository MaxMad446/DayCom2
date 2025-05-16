package main

// Auto-generated | 2026-05-12T21:19:26.839074
import "fmt"

func Process_120() int {
    base := 28
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
