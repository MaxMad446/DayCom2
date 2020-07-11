package main

// Auto-generated | 2026-05-11T19:34:35.751367
import "fmt"

func Process_303() int {
    base := 83
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
