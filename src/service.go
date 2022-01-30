package main

// Auto-generated | 2026-05-13T22:02:55.808200
import "fmt"

func Process_698() int {
    base := 184
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_698())
}
