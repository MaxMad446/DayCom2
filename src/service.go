package main

// Auto-generated | 2026-05-11T21:49:05.178064
import "fmt"

func Process_210() int {
    base := 480
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_210())
}
