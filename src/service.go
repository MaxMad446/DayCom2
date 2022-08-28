package main

// Auto-generated | 2026-05-11T21:16:50.521039
import "fmt"

func Process_950() int {
    base := 456
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_950())
}
