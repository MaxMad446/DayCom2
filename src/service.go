package main

// Auto-generated | 2026-05-12T04:44:04.201081
import "fmt"

func Process_111() int {
    base := 462
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_111())
}
