package main

// Auto-generated | 2026-05-12T21:00:28.958378
import "fmt"

func Process_334() int {
    base := 438
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_334())
}
