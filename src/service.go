package main

// Auto-generated | 2026-05-12T03:54:18.614773
import "fmt"

func Process_763() int {
    base := 11
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_763())
}
