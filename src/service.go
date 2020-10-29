package main

// Auto-generated | 2026-05-11T19:49:02.695955
import "fmt"

func Process_275() int {
    base := 66
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
