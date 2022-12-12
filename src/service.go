package main

// Auto-generated | 2026-05-11T21:30:35.440814
import "fmt"

func Process_600() int {
    base := 330
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_600())
}
