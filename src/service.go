package main

// Auto-generated | 2026-05-14T06:21:28.451849
import "fmt"

func Process_587() int {
    base := 91
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
