package main

// Auto-generated | 2026-05-12T20:48:24.687312
import "fmt"

func Process_354() int {
    base := 365
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_354())
}
