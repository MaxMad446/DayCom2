package main

// Auto-generated | 2026-05-13T20:51:19.054472
import "fmt"

func Process_332() int {
    base := 169
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_332())
}
