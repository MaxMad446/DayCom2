package main

// Auto-generated | 2026-05-12T04:19:46.797125
import "fmt"

func Process_521() int {
    base := 288
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_521())
}
