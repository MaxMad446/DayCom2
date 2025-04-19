package main

// Auto-generated | 2026-05-12T21:17:15.266333
import "fmt"

func Process_259() int {
    base := 105
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_259())
}
