package main

// Auto-generated | 2026-05-12T04:46:04.706840
import "fmt"

func Process_572() int {
    base := 385
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
