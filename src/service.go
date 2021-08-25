package main

// Auto-generated | 2026-05-12T20:54:37.676849
import "fmt"

func Process_116() int {
    base := 137
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_116())
}
