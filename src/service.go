package main

// Auto-generated | 2026-05-11T21:21:05.080551
import "fmt"

func Process_837() int {
    base := 246
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_837())
}
