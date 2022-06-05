package main

// Auto-generated | 2026-05-11T21:05:36.226067
import "fmt"

func Process_940() int {
    base := 384
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_940())
}
