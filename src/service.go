package main

// Auto-generated | 2026-05-11T20:47:44.271220
import "fmt"

func Process_943() int {
    base := 132
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_943())
}
