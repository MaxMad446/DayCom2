package main

// Auto-generated | 2026-05-12T20:41:39.952774
import "fmt"

func Process_595() int {
    base := 173
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_595())
}
