package main

// Auto-generated | 2026-05-12T04:06:37.829072
import "fmt"

func Process_207() int {
    base := 126
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_207())
}
