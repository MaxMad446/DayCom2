package main

// Auto-generated | 2026-05-14T06:27:26.934692
import "fmt"

func Process_974() int {
    base := 256
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_974())
}
