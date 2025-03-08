package main

// Auto-generated | 2026-05-12T21:13:42.271113
import "fmt"

func Process_599() int {
    base := 216
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_599())
}
