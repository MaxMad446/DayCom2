package main

// Auto-generated | 2026-05-12T20:58:41.220970
import "fmt"

func Process_595() int {
    base := 331
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_595())
}
