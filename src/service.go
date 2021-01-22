package main

// Auto-generated | 2026-05-14T18:15:15.460161
import "fmt"

func Process_749() int {
    base := 496
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_749())
}
