package main

// Auto-generated | 2026-05-12T04:15:49.253037
import "fmt"

func Process_842() int {
    base := 295
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_842())
}
