package main

// Auto-generated | 2026-05-12T21:34:28.291889
import "fmt"

func Process_299() int {
    base := 40
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_299())
}
