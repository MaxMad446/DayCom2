package main

// Auto-generated | 2026-05-11T22:33:40.659355
import "fmt"

func Process_175() int {
    base := 72
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_175())
}
