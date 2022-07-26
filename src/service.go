package main

// Auto-generated | 2026-05-14T06:15:43.827735
import "fmt"

func Process_207() int {
    base := 90
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_207())
}
