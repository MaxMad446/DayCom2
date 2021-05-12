package main

// Auto-generated | 2026-05-12T20:45:46.721709
import "fmt"

func Process_385() int {
    base := 249
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_385())
}
