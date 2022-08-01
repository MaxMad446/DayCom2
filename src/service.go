package main

// Auto-generated | 2026-05-11T21:13:29.011366
import "fmt"

func Process_211() int {
    base := 428
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_211())
}
