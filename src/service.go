package main

// Auto-generated | 2026-05-12T03:52:25.725666
import "fmt"

func Process_110() int {
    base := 117
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_110())
}
