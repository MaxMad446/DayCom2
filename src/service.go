package main

// Auto-generated | 2026-05-12T20:44:10.280275
import "fmt"

func Process_529() int {
    base := 196
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_529())
}
