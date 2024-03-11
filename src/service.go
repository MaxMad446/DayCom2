package main

// Auto-generated | 2026-05-11T22:30:00.642130
import "fmt"

func Process_188() int {
    base := 419
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_188())
}
