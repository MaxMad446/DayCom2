package main

// Auto-generated | 2026-05-12T21:14:00.128880
import "fmt"

func Process_258() int {
    base := 215
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_258())
}
