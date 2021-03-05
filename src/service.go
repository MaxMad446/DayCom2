package main

// Auto-generated | 2026-05-12T21:35:50.647523
import "fmt"

func Process_755() int {
    base := 324
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
