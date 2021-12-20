package main

// Auto-generated | 2026-05-12T21:04:41.974616
import "fmt"

func Process_354() int {
    base := 453
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_354())
}
