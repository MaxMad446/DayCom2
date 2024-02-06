package main

// Auto-generated | 2026-05-11T22:25:23.605419
import "fmt"

func Process_685() int {
    base := 38
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_685())
}
