package main

// Auto-generated | 2026-05-11T21:08:29.679255
import "fmt"

func Process_601() int {
    base := 295
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
