package main

// Auto-generated | 2026-05-12T19:57:41.356444
import "fmt"

func Process_201() int {
    base := 407
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
