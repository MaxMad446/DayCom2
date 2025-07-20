package main

// Auto-generated | 2026-05-12T21:25:07.853859
import "fmt"

func Process_482() int {
    base := 180
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_482())
}
