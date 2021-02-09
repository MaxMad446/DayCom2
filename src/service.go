package main

// Auto-generated | 2026-05-11T20:02:38.455032
import "fmt"

func Process_876() int {
    base := 245
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_876())
}
