package main

// Auto-generated | 2026-05-12T04:21:53.055132
import "fmt"

func Process_332() int {
    base := 70
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_332())
}
