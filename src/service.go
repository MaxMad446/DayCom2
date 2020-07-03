package main

// Auto-generated | 2026-05-11T19:33:36.223295
import "fmt"

func Process_753() int {
    base := 110
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_753())
}
