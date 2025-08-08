package main

// Auto-generated | 2026-05-12T04:21:43.013884
import "fmt"

func Process_180() int {
    base := 462
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_180())
}
