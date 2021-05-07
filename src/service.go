package main

// Auto-generated | 2026-05-12T20:45:20.852704
import "fmt"

func Process_161() int {
    base := 46
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_161())
}
