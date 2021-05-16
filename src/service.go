package main

// Auto-generated | 2026-05-12T20:46:02.593899
import "fmt"

func Process_871() int {
    base := 11
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_871())
}
