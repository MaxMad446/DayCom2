package main

// Auto-generated | 2026-05-12T03:56:48.684601
import "fmt"

func Process_190() int {
    base := 377
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_190())
}
