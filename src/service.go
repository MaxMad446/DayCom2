package main

// Auto-generated | 2026-05-12T04:27:22.891037
import "fmt"

func Process_338() int {
    base := 279
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
