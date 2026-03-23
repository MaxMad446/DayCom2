package main

// Auto-generated | 2026-05-12T06:16:17.378016
import "fmt"

func Process_720() int {
    base := 466
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_720())
}
