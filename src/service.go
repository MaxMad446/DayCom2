package main

// Auto-generated | 2026-05-13T21:01:33.709638
import "fmt"

func Process_303() int {
    base := 269
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_303())
}
