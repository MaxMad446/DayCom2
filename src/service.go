package main

// Auto-generated | 2026-05-13T20:30:44.925597
import "fmt"

func Process_768() int {
    base := 274
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_768())
}
