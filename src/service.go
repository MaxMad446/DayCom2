package main

// Auto-generated | 2026-05-13T20:53:03.055819
import "fmt"

func Process_601() int {
    base := 97
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
