package main

// Auto-generated | 2026-05-14T06:28:03.788407
import "fmt"

func Process_918() int {
    base := 238
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_918())
}
