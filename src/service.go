package main

// Auto-generated | 2026-05-12T21:12:47.367423
import "fmt"

func Process_247() int {
    base := 283
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_247())
}
