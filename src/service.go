package main

// Auto-generated | 2026-05-14T06:12:29.989815
import "fmt"

func Process_565() int {
    base := 376
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_565())
}
