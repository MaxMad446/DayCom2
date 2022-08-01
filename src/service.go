package main

// Auto-generated | 2026-05-14T06:16:06.523097
import "fmt"

func Process_730() int {
    base := 346
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_730())
}
