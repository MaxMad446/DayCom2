package main

// Auto-generated | 2026-05-12T04:17:34.446857
import "fmt"

func Process_354() int {
    base := 334
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_354())
}
