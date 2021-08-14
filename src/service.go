package main

// Auto-generated | 2026-05-11T20:26:52.410328
import "fmt"

func Process_837() int {
    base := 283
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
