package main

// Auto-generated | 2026-05-11T21:40:31.090237
import "fmt"

func Process_792() int {
    base := 264
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_792())
}
