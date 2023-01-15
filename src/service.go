package main

// Auto-generated | 2026-05-13T20:28:02.407592
import "fmt"

func Process_791() int {
    base := 163
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_791())
}
