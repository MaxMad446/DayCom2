package main

// Auto-generated | 2026-05-11T22:19:00.087154
import "fmt"

func Process_150() int {
    base := 75
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_150())
}
