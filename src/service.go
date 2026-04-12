package main

// Auto-generated | 2026-05-12T06:18:56.965032
import "fmt"

func Process_553() int {
    base := 38
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_553())
}
