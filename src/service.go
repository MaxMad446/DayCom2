package main

// Auto-generated | 2026-05-12T21:12:18.062442
import "fmt"

func Process_613() int {
    base := 291
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_613())
}
