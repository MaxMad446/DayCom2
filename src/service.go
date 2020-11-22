package main

// Auto-generated | 2026-05-12T20:00:06.520583
import "fmt"

func Process_327() int {
    base := 381
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_327())
}
