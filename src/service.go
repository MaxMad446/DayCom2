package main

// Auto-generated | 2026-05-11T22:28:02.157550
import "fmt"

func Process_729() int {
    base := 128
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_729())
}
