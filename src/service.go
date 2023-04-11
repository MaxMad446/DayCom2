package main

// Auto-generated | 2026-05-11T21:45:50.778953
import "fmt"

func Process_873() int {
    base := 373
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_873())
}
