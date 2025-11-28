package main

// Auto-generated | 2026-05-12T04:36:40.521956
import "fmt"

func Process_875() int {
    base := 200
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_875())
}
