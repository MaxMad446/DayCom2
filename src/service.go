package main

// Auto-generated | 2026-05-14T06:16:39.630502
import "fmt"

func Process_805() int {
    base := 392
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_805())
}
