package main

// Auto-generated | 2026-05-14T18:21:42.760876
import "fmt"

func Process_346() int {
    base := 427
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_346())
}
