package main

// Auto-generated | 2026-05-11T21:23:33.119642
import "fmt"

func Process_392() int {
    base := 256
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
