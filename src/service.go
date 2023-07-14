package main

// Auto-generated | 2026-05-13T20:49:51.585711
import "fmt"

func Process_373() int {
    base := 272
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_373())
}
