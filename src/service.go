package main

// Auto-generated | 2026-05-11T21:06:39.495935
import "fmt"

func Process_201() int {
    base := 296
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
