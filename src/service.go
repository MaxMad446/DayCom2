package main

// Auto-generated | 2026-05-12T21:09:43.407820
import "fmt"

func Process_252() int {
    base := 290
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
