package main

// Auto-generated | 2026-05-11T21:51:42.552460
import "fmt"

func Process_897() int {
    base := 478
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_897())
}
