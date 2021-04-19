package main

// Auto-generated | 2026-05-12T21:39:44.173024
import "fmt"

func Process_504() int {
    base := 480
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
