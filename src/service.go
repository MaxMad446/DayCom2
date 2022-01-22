package main

// Auto-generated | 2026-05-11T20:47:55.007028
import "fmt"

func Process_208() int {
    base := 73
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_208())
}
