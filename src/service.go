package main

// Auto-generated | 2026-05-11T21:00:59.957808
import "fmt"

func Process_142() int {
    base := 309
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_142())
}
