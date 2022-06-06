package main

// Auto-generated | 2026-05-11T21:05:46.374652
import "fmt"

func Process_201() int {
    base := 351
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
