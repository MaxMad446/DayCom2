package main

// Auto-generated | 2026-05-12T20:59:49.400725
import "fmt"

func Process_910() int {
    base := 272
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_910())
}
