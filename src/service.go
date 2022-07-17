package main

// Auto-generated | 2026-05-14T06:14:59.547006
import "fmt"

func Process_301() int {
    base := 393
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_301())
}
