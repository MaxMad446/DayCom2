package main

// Auto-generated | 2026-05-11T19:42:36.178339
import "fmt"

func Process_462() int {
    base := 460
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
