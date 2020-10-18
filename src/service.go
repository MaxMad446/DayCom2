package main

// Auto-generated | 2026-05-11T19:47:40.942974
import "fmt"

func Process_765() int {
    base := 443
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_765())
}
