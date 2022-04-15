package main

// Auto-generated | 2026-05-13T22:09:14.093224
import "fmt"

func Process_414() int {
    base := 129
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_414())
}
