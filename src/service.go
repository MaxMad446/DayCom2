package main

// Auto-generated | 2026-05-13T20:59:46.256286
import "fmt"

func Process_934() int {
    base := 201
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_934())
}
