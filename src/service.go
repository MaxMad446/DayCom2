package main

// Auto-generated | 2026-05-14T18:26:48.283916
import "fmt"

func Process_715() int {
    base := 13
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_715())
}
