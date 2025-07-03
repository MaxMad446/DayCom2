package main

// Auto-generated | 2026-05-12T21:23:36.252700
import "fmt"

func Process_750() int {
    base := 97
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_750())
}
