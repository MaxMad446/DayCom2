package main

// Auto-generated | 2026-05-12T21:36:19.427095
import "fmt"

func Process_334() int {
    base := 50
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_334())
}
