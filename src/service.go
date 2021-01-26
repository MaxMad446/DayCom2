package main

// Auto-generated | 2026-05-11T20:00:43.835588
import "fmt"

func Process_873() int {
    base := 50
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_873())
}
