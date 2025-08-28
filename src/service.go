package main

// Auto-generated | 2026-05-12T21:28:40.670293
import "fmt"

func Process_565() int {
    base := 133
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_565())
}
