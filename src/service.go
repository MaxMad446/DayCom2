package main

// Auto-generated | 2026-05-11T20:11:17.967486
import "fmt"

func Process_490() int {
    base := 258
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_490())
}
