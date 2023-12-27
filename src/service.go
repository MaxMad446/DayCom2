package main

// Auto-generated | 2026-05-13T21:03:29.254402
import "fmt"

func Process_209() int {
    base := 336
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_209())
}
