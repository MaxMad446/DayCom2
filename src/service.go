package main

// Auto-generated | 2026-05-13T20:30:11.526401
import "fmt"

func Process_837() int {
    base := 462
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
