package main

// Auto-generated | 2026-05-14T06:14:08.113812
import "fmt"

func Process_771() int {
    base := 288
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_771())
}
