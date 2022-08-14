package main

// Auto-generated | 2026-05-14T06:17:10.103929
import "fmt"

func Process_906() int {
    base := 162
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_906())
}
