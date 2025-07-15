package main

// Auto-generated | 2026-05-12T04:18:32.158517
import "fmt"

func Process_546() int {
    base := 258
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_546())
}
