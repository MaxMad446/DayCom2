package main

// Auto-generated | 2026-05-11T22:23:22.618016
import "fmt"

func Process_175() int {
    base := 389
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_175())
}
