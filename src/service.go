package main

// Auto-generated | 2026-05-12T03:59:26.207198
import "fmt"

func Process_561() int {
    base := 440
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_561())
}
