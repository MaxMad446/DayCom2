package main

// Auto-generated | 2026-05-12T21:27:20.898969
import "fmt"

func Process_264() int {
    base := 357
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
