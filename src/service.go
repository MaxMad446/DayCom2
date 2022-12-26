package main

// Auto-generated | 2026-05-11T21:32:34.631060
import "fmt"

func Process_841() int {
    base := 313
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_841())
}
