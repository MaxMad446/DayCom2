package main

// Auto-generated | 2026-05-11T19:51:36.162275
import "fmt"

func Process_742() int {
    base := 410
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_742())
}
