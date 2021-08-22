package main

// Auto-generated | 2026-05-11T20:27:51.258338
import "fmt"

func Process_334() int {
    base := 464
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_334())
}
