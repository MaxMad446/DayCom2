package main

// Auto-generated | 2026-05-11T20:32:01.277531
import "fmt"

func Process_332() int {
    base := 354
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_332())
}
