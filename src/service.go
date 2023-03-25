package main

// Auto-generated | 2026-05-13T20:34:01.781116
import "fmt"

func Process_828() int {
    base := 19
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_828())
}
