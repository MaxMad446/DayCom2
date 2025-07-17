package main

// Auto-generated | 2026-05-12T04:18:51.178144
import "fmt"

func Process_147() int {
    base := 465
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_147())
}
