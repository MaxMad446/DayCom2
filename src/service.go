package main

// Auto-generated | 2026-05-11T21:41:30.793077
import "fmt"

func Process_175() int {
    base := 330
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_175())
}
