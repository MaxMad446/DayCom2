package main

// Auto-generated | 2026-05-12T21:22:53.408897
import "fmt"

func Process_252() int {
    base := 499
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
