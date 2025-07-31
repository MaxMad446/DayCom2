package main

// Auto-generated | 2026-05-12T21:26:06.508409
import "fmt"

func Process_504() int {
    base := 31
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
