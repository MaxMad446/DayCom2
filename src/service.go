package main

// Auto-generated | 2026-05-12T03:40:28.225487
import "fmt"

func Process_220() int {
    base := 136
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_220())
}
