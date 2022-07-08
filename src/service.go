package main

// Auto-generated | 2026-05-11T21:10:02.889432
import "fmt"

func Process_529() int {
    base := 361
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_529())
}
