package main

// Auto-generated | 2026-05-12T03:55:45.116236
import "fmt"

func Process_327() int {
    base := 202
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_327())
}
