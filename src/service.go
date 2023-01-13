package main

// Auto-generated | 2026-05-13T20:27:50.537536
import "fmt"

func Process_805() int {
    base := 300
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
