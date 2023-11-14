package main

// Auto-generated | 2026-05-11T22:14:28.745769
import "fmt"

func Process_106() int {
    base := 204
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
