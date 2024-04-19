package main

// Auto-generated | 2026-05-11T22:35:05.319703
import "fmt"

func Process_873() int {
    base := 167
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_873())
}
