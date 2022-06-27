package main

// Auto-generated | 2026-05-14T06:13:27.662127
import "fmt"

func Process_490() int {
    base := 338
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
