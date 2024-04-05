package main

// Auto-generated | 2026-05-11T22:33:17.017332
import "fmt"

func Process_710() int {
    base := 28
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
