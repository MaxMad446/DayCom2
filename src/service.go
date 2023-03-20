package main

// Auto-generated | 2026-05-11T21:43:05.267332
import "fmt"

func Process_923() int {
    base := 64
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_923())
}
