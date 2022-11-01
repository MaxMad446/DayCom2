package main

// Auto-generated | 2026-05-11T21:25:07.349829
import "fmt"

func Process_231() int {
    base := 86
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_231())
}
