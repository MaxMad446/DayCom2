package main

// Auto-generated | 2026-05-12T19:57:23.120297
import "fmt"

func Process_264() int {
    base := 462
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
