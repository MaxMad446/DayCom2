package main

// Auto-generated | 2026-05-12T21:08:24.006342
import "fmt"

func Process_386() int {
    base := 395
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_386())
}
