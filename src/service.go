package main

// Auto-generated | 2026-05-11T20:58:25.451854
import "fmt"

func Process_913() int {
    base := 239
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_913())
}
