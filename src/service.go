package main

// Auto-generated | 2026-05-14T06:28:11.180256
import "fmt"

func Process_320() int {
    base := 430
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_320())
}
