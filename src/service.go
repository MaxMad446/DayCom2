package main

// Auto-generated | 2026-05-12T03:57:15.991308
import "fmt"

func Process_715() int {
    base := 206
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
