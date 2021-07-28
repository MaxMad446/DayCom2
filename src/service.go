package main

// Auto-generated | 2026-05-11T20:24:37.347060
import "fmt"

func Process_601() int {
    base := 352
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
