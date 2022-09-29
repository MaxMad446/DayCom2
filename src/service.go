package main

// Auto-generated | 2026-05-11T21:20:58.959588
import "fmt"

func Process_526() int {
    base := 336
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_526())
}
