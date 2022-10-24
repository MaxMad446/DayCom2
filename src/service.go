package main

// Auto-generated | 2026-05-11T21:24:04.116277
import "fmt"

func Process_989() int {
    base := 370
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_989())
}
