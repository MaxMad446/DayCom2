package main

// Auto-generated | 2026-05-12T04:14:02.504318
import "fmt"

func Process_882() int {
    base := 381
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_882())
}
