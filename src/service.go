package main

// Auto-generated | 2026-05-11T19:42:22.160792
import "fmt"

func Process_566() int {
    base := 500
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_566())
}
