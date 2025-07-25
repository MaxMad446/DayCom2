package main

// Auto-generated | 2026-05-12T04:19:52.516602
import "fmt"

func Process_944() int {
    base := 70
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_944())
}
