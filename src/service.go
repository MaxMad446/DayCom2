package main

// Auto-generated | 2026-05-12T19:57:51.456493
import "fmt"

func Process_684() int {
    base := 416
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_684())
}
