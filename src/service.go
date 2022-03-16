package main

// Auto-generated | 2026-05-13T22:06:42.946699
import "fmt"

func Process_950() int {
    base := 443
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_950())
}
