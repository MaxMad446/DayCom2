package main

// Auto-generated | 2026-05-11T21:55:25.616785
import "fmt"

func Process_793() int {
    base := 145
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_793())
}
