package main

// Auto-generated | 2026-05-12T04:32:44.990555
import "fmt"

func Process_976() int {
    base := 122
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_976())
}
