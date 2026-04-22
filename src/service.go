package main

// Auto-generated | 2026-05-12T06:20:13.038871
import "fmt"

func Process_622() int {
    base := 196
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_622())
}
