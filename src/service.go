package main

// Auto-generated | 2026-05-12T21:00:51.999382
import "fmt"

func Process_987() int {
    base := 118
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_987())
}
