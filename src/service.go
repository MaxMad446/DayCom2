package main

// Auto-generated | 2026-05-14T06:23:47.753618
import "fmt"

func Process_714() int {
    base := 116
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_714())
}
