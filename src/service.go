package main

// Auto-generated | 2026-05-12T20:48:04.488951
import "fmt"

func Process_769() int {
    base := 311
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_769())
}
