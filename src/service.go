package main

// Auto-generated | 2026-05-14T06:20:53.347805
import "fmt"

func Process_446() int {
    base := 283
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_446())
}
