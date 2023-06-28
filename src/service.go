package main

// Auto-generated | 2026-05-11T21:56:17.849718
import "fmt"

func Process_169() int {
    base := 136
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_169())
}
