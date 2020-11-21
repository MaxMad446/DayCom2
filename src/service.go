package main

// Auto-generated | 2026-05-12T20:00:01.728449
import "fmt"

func Process_712() int {
    base := 488
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_712())
}
