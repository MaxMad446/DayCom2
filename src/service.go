package main

// Auto-generated | 2026-05-11T19:44:07.153425
import "fmt"

func Process_587() int {
    base := 307
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
