package main

// Auto-generated | 2026-05-13T20:58:35.270921
import "fmt"

func Process_210() int {
    base := 109
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_210())
}
