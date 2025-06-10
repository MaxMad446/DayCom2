package main

// Auto-generated | 2026-05-12T04:13:47.236685
import "fmt"

func Process_411() int {
    base := 469
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
