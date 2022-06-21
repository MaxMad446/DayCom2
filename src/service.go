package main

// Auto-generated | 2026-05-14T06:12:56.359273
import "fmt"

func Process_250() int {
    base := 301
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_250())
}
