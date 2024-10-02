package main

// Auto-generated | 2026-05-12T03:41:02.773079
import "fmt"

func Process_458() int {
    base := 105
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_458())
}
