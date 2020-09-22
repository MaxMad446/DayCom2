package main

// Auto-generated | 2026-05-11T19:44:13.180062
import "fmt"

func Process_140() int {
    base := 237
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_140())
}
