package main

// Auto-generated | 2026-05-12T04:46:12.174041
import "fmt"

func Process_451() int {
    base := 166
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_451())
}
