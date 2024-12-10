package main

// Auto-generated | 2026-05-12T03:50:03.801958
import "fmt"

func Process_392() int {
    base := 305
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
