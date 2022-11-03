package main

// Auto-generated | 2026-05-14T06:23:50.774354
import "fmt"

func Process_108() int {
    base := 370
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_108())
}
