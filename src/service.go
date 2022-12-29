package main

// Auto-generated | 2026-05-14T06:28:34.659949
import "fmt"

func Process_520() int {
    base := 281
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_520())
}
