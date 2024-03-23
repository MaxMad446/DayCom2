package main

// Auto-generated | 2026-05-11T22:31:32.766578
import "fmt"

func Process_974() int {
    base := 173
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
